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
 
arv* cria(int c){
    arv *no=(arv*) malloc(sizeof(arv));
    no->dir=NULL;
    no->esq=NULL;
    no->valor=c;
    return no;
}
int vazia(arv* a){
    if(a==NULL){
        return 1;
    }
    return 0;
}
arv* insere(arv* a,int c){
    if( vazia(a)){
        a=cria(c);
       
    }
    else if(a->valor>c){
        a->esq=insere(a->esq,c);
    }
    else if(a->valor<c){
        a->dir=insere(a->dir,c);
    }
    return a;
}
/* arv* */void retira(arv *a,int c){
    if(vazia(a)){
        return /* NULL */;
    }
    else if(a->valor>c){
        /* a->esq= */retira(a->esq,c);
    }
    else if(a->valor<c){
        /* a->dir= */retira(a->dir,c);
    }
    else{
        if(a->dir==NULL && a->esq==NULL){
            free(a);
        }
        else if(a->esq==NULL){
            arv* aux=a;
            a=a->dir;
            free(aux);
        }
        else if(a->dir==NULL){
            arv* aux=a;
            a=a->esq;
            free(aux);
        }
         else{
            arv* aux1=a,*aux2=a->esq;
            while(aux1->dir!=NULL){
                aux2=aux1;
                aux1=aux1->dir;
            }
            aux2->dir=aux1->esq;
            a->valor=aux1->valor;
           /*  aux1->esq=a->esq;
            aux1->dir=a->dir; */
            free(aux1);
        }
    }
    /* return a; */
}
int estanalista(arv* a,int c){
    arv* no=a;
    while(no!=NULL){
        if(no->valor==c)
            return 1;
        else if(no->valor<c){
            no=no->dir;
        }
        else if (no->valor>c)
        {
            no=no->esq;
        }
       
    }
    return 0;
}
void destroiarv(arv* a){
    if(a!=NULL){
        destroiarv(a->esq);
        arv* aux=a;
        a=NULL;
        free(a);
        destroiarv(aux->dir);
        aux=NULL;
        free(aux);
       
    }
}
void soma(arv* a,int &c){
if(a!=NULL){
        soma(a->esq,c);
        c+=a->valor;
        soma(a->dir,c);
    }
 
}
 
void imprime(arv* a){
    if(a!=NULL){
        imprime(a->esq);
        printf("\n%d",a->valor);
        imprime(a->dir);
    }
}
 
 int tamanho(arv *raiz) {
    if(raiz == NULL)
        return 0;
    else
        return 1 + tamanho(raiz->esq) + tamanho(raiz->dir);
} int getAltura(arv *n) {
    int lh, rh;

    if (n == NULL)
        return 0;
    else {
        lh = getAltura(n->esq);
        rh = getAltura(n->dir);
        return 1 + (lh > rh ? lh : rh);
    }
}

 
int main(int argc, char const *argv[])
{
    arv* a=NULL;
    int i;
    a=insere(a,10);
    a=insere(a,5);
    a=insere(a,6);
    a=insere(a,4);
    //a=insere(a,2);
    //a=insere(a,7);
    i=estanalista(a,7);
    //retira(a,5);
    printf("\n->%d",i);
    soma(a,i);
    printf("\n-->%d",i);
    printf("\n-->%d",getAltura(a));
    printf("\nsaida:");
    imprime(a);
    return 0;
}
