#ifndef lista_h_
#define lista_h_
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
    if(li != NULL){
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
	while (no!=NULL && strcmp(no->dados,s)!=0)//caso no==null,n ha o elemento,caso conttrario ha
	{
		no= no->prox;
	}
	if(no==NULL){
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
    no->prox=NULL;
	if((*li)==NULL){//caso seja o primeiro elemento
    	no->ant=NULL;
        (*li)=no;

	}
	else{
		elem *sub=*li;//cria um vetor que aponta pro mesmo lugar que a lista que servira para correr a lista sem modificar o ponteiro
		while (sub->prox!=NULL){
			sub=sub->prox;
		}
		sub->prox=no;
        no->ant=sub;
		
	}

	x=1;
    return 1;
	

}
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
#endif