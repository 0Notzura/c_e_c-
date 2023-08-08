#include <stdio.h>
#include<stdlib.h>
#include <iostream>
#include<string.h>
using namespace std;
 
struct elemento{
    int contador=0;
    char *dados= (char*) malloc(sizeof(char)*50);
    struct elemento *prox;
    struct elemento *ant;
};
typedef struct elemento elem;
typedef struct elemento* lista;
 
lista* cria_lista(){
    lista* li = (lista*) malloc(sizeof(lista));
    if(li != NULL)//confere se a lista foi criada
        *li = NULL;
    return li;//retorna uma lista criada
}
void libera_lista(lista* li){
    if((*li)->contador != 0){
        elem* no;
        while((*li) != NULL){//roda a lista toda e a limpa
            no = *li;
            *li = (*li)->prox;
            free(no);
        }
        free(li);
    }
}
 
int listavazia(lista* l){
 
    if(l==NULL ){
        return 1;
    }
    return 0;
}
int listacheia(lista *li){
    return 0;
}
int estanalista (lista *li, char *s){
    elem *no=*li;
    int c=0;
    while (c!=(*li)->contador && strcmp(no->dados,s)!=0)//caso no==null,n ha o elemento,caso conttrario ha
    {
        no= no->prox;
        c++;
    }
    if(c==((*li)->contador+1)){
        return 0;
    }
    else{
        return 1;
    }
}
int insere(lista* li,char *s,int &x){
    if(li==NULL || estanalista(li,s)==1){
        x=0;
        return 0;
    }
 
    elem* no=(elem*) malloc(sizeof(elem));
    if(no==NULL){//confere se no foi criado direito
        x=0;
        return 0;
    }
    no->dados=s;//coloca os valores em no
    no->prox=(*li);//(*li);
    //cout<<"\ninsere:"<<(*li)<<"\n";
    if((*li)->contador==0){//caso seja o primeiro elemento
        no->ant=(*li);
        (*li)=no;
 
    }
    else{
        elem *sub=*li;//cria um vetor que aponta pro mesmo lugar que a lista que servira para correr a lista sem modificar o ponteiro
        while (sub->prox!=NULL){
            sub=sub->prox;
        }
        sub->prox=no;
        no->ant=sub;
        (*li)->ant=no;
       
    }
    (*li)->contador++;
    x=1;
    return 1;
   
 
}
int remove(lista* li,char s[50],int &x){
    if ((*li)->contador==0 || estanalista(li,s)==0){//confere se esta na lista
        x=0;
        return 0;
        }
    x=1;
    elem *ant,*no=*li;//cria um vetor que aponta pro mesmo lugar que a lista e um para marcar o elemento anterior
    int c=0;
    while (c!=(*li)->contador && strcmp(no->dados,s)!=0)//pega o elemento
    {
        ant=no;
        no= no->prox;
        c++;
    }
    if((*li)->contador==0){
       
        li=NULL;
    }
    else{
        no->ant->prox=no->prox;
    }
    if(no->prox!=NULL){
        no->prox->ant=no->ant;
    }
    (*li)->contador--;
    free(no);
    return 1;
}
/* char* pegaoprimeiro(lista* l,int &tem){
    char *s;
    if(listavazia(l)){
        tem=0;
        return "";
    }
    tem=1;
    s=(*l)->dados;
    (*l)->contador=1;//sempre volta o contador a 1 quando a função é usada
    return s;
}
char* pegaoprox(lista* l,int &tem){
    char *s;
    elem *no=*l;//cria um vetor que aponta pro mesmo lugar que a lista
    int i=0;
    if(listavazia(l)){
        tem=0;
        return "";
    }
 
    tem=1;
    while (i<(*l)->contador )//usa o contador da lista para saber ate onde deve ir para pegar o dado
    {
        no= no->prox;
        i++;
    }
        s=no->dados;
        (*l)->contador++;//aumenta o contador em 1
        free(no);
        return s;
   
   
}
 
char* pegaoant (lista *li, char *s){
    elem *no=*li;
    if(listavazia(li) || estanalista(li,s)==0){//confere se o elemento esta na lista
        return "";
    }
    while ( strcmp(no->dados,s)!=0)//pega o elemento que foi pedido
    {
        no= no->prox;
    }
    return no->ant->dados;//retorna o elemento anterior ao que foi passado
}
  */
int imprime (lista *li){
       if(listavazia(li)){
        return 0;
    }
    int i=1;
    elem *no=*li;
    while (no!=NULL)
    {  
        cout<<"\nitem"<<i<<":"<<no->dados;
        no= no->prox;
        i++;
    }
    return 0;
}
int main(int argc, char const *argv[])
{
    lista *l;
    char *c,*d,*e,*f;
    int x;
    l=cria_lista();
    c="item1";//inicia as variaveis
    d="item2";
    e="item3";
    insere(l,c,x);//faz as inserções
    insere(l,d,x);
    insere(l,e,x);
    remove(l,c,x);//remove e insere c denovo,trocando o lugar dele na fila
    insere(l,c,x);
    insere(l,e,x);//teste pra ver se a mesma vairavel não sera inserida duas vezes
    imprime(l);//mostra como esta a fila
    //teste das funções de pegar
    /* f=pegaoant(l,c);
    cout<<"\n"<<f;
    f=pegaoprimeiro(l,x);
    cout<<"\n"<<f;
    f=pegaoprox(l,x);
    cout<<"\n"<<f;
    f=pegaoprox(l,x);
    cout<<"\n"<<f; */
   
   
    return 0;
}
