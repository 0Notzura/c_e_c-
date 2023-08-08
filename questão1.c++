#include <stdio.h>
#include<stdlib.h>
#include <iostream>
using namespace std;

struct NodePtr{
	int contador=0;
    int dados;
    struct NodePtr *prox;
};
typedef struct NodePtr elem;
typedef struct NodePtr* lista;

lista* cria_lista(){
    lista* L = (lista*) malloc(sizeof(lista));
    if(L != NULL)
        *L = NULL;
    return L;
}

void libera_lista(lista* L){
    if(L != NULL){
        elem* no;
        while((*L) != NULL){//roda a lista toda e a limpa
            no = *L;
            *L = (*L)->prox;
            free(no);
        }
        free(L);
    }
}
int listavazia(lista* L){
    if(L==NULL){
        return 1;
    }
    else if(*L==NULL){
        return 1;
    }
    else{
        return 0;
    }
}
bool estanalista (lista *L, int X){
	elem *no=*L;
	while (no!=NULL && X!=no->dados)//caso no==null,n ha o elemento,caso conttrario ha
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
int insere(lista* L,int X,int &x){
	if(L==NULL){
		x=0;
        return 0;
	}

    elem* no=(elem*) malloc(sizeof(elem));
    if(no==NULL){//confere se no foi criado direito
		x=0;
        return 0;
	}
    no->dados=X;//coloca os valores para no
    no->prox=NULL;
	if((*L)==NULL){//caso seja o primeiro elemento
    	(*L)=no;
	}
	else{
		elem *sub=*L;//cria um vetor que aponta pro mesmo lugar que a lista que servira para correr a lista sem modificar o ponteiro
		while (sub->prox!=NULL){
			sub=sub->prox;
		}
		sub->prox=no;
		
	}

	x=1;
    return 1;
	

}
int removetodos(lista* L,int X,bool &x){
	if (L==NULL || estanalista(L,X)==0){
		x=0;
		return 0;
		}
	x=1;
	elem *ant,*no=*L;//cria um vetor que aponta pro mesmo lugar que a lista e um para marcar o elemento anterior
	while (no!=NULL )//caso no chegue a null é porque não tinha o elemento
	{   
        if(no->dados==X && no==(*L)){//confere se é igual ao priemiro valor
            *L=(*L)->prox;
        }
        else if(no->dados==X && no!=(*L)){//confere os demais valores
            ant->prox=no->prox;
        }
		ant=no;
		no= no->prox;
	}
	
}
int remove1(lista* L,int X,bool &x){
	if (L==NULL || estanalista(L,X)==0){
		x=0;
		return 0;
		}
	x=1;
	elem *ant,*no=*L;//cria um vetor que aponta pro mesmo lugar que a lista e um para marcar o elemento anterior
	while (no!=NULL && X!=no->dados)//caso no chegue a null é porque não tinha o elemento
	{
		ant=no;
		no= no->prox;
	}
	if(no==*L){
		
		*L=no->prox;
        return 1;
	}
	else	
		ant->prox=no->prox;
	free(no);
	return 1;
	
}
void pegaoprimeiro(lista* L,int &X,int &tem){
	
	if(listavazia(L)){
		tem=0;
	}
    else{
	    tem=1;
	    X=(*L)->dados;
	    (*L)->contador=1;//sempre volta o contador a 1 quando a função é usada
    }
}
void pegaoprox(lista* L,int &X,int &tem){
	elem *no=*L;//cria um vetor que aponta pro mesmo lugar que a lista
	int i=0;
	if(listavazia(L)|| (*L)->contador==0){
		tem=0;
	}
    else{
	    tem=1;
	    while (i<(*L)->contador )//usa o contador da lista para saber ate onde deve ir para pegar o dado
	    {
	    	no= no->prox;
	    	i++;
	    }
        if(no==NULL){
            tem=0;
        }
        else{
            X=no->dados;
        }
	    	
	    free(no);
    }
	
}
int imprime (lista *L){
	if(listavazia(L)){
		return 0;
	}
	int i=1;
	elem *no=*L;
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
    lista *L;
    L=cria_lista();
	int c,x;
    bool d;
    L=cria_lista();
	scanf("%d",&c);
	insere(L,c,x);
    scanf("%d",&c);
    insere(L,c,x);
    scanf("%d",&c);
    insere(L,c,x);
    removetodos(L,c,d);
	cout<<(*L)->dados;
    imprime(L);
    pegaoprimeiro(L,c,x);
    pegaoprox(L,c,x);
    pegaoprox(L,c,x);
    cout<<c;
    return 0;
}

