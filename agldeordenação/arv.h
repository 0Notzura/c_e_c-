#include <stdio.h>
#include<stdlib.h>
#include<string.h>
 
struct no
{
    int valor;
    struct no *esq;
    struct no *dir;
};
typedef struct no arv;
 
arv* cria(int x){
    arv *no=(arv*) malloc(sizeof(arv));
    no->dir=NULL;
    no->esq=NULL;
    no->valor=x;
    return no;
}
int vazia(arv* r){
    if(r==NULL){
        return 1;
    }
    return 0;
}
arv* insere(arv* r,int x){
    if( vazia(r)){
        r=cria(x);
       
    }
    else if(r->valor>x){
        r->esq=insere(r->esq,x);
    }
    else if(r->valor<x){
        r->dir=insere(r->dir,x);
    }
    return r ;
}
void Remove(arv *r,int x,bool ok){
    if(vazia(r)){//percorre ate encontrar a posição em que o elemento esta,caso esteja
        ok=false;
        return ;
    }
    else if(r->valor>x){
        Remove(r->esq,x,ok);
    }
    else if(r->valor<x){
        Remove(r->dir,x,ok);
    }
    else{//a patir do momento em que o elemento foi encontrado ele segue pra ca
        if(r->dir==NULL && r->esq==NULL){//caso não tenha elementos abaixo do nó
            ok=true;
            free(r);
        }
        else if(r->esq==NULL){//caso tenha elementos apenas a direita 
            arv* aux=r;
            ok=true;
            r=r->dir;
            free(aux);
        }
        else if(r->dir==NULL){//caso tenha elementos apenas a esquerda
            arv* aux=r;
            ok=true;
            r=r->esq;
            free(aux);
        }
         else{//caso tenha elementos dos dois lados
            arv* aux1=r,*aux2=r->esq;
            while(aux1->dir!=NULL){
                aux2=aux1;
                aux1=aux1->dir;
            }
            aux2->dir=aux1->esq;
            r->valor=aux1->valor;
            free(aux1);
        }
    }
}
void imprime(arv* r){
    if(r!=NULL){
        imprime(r->esq);
        printf("\n%d",r->valor);
        imprime(r->dir);
    }
}