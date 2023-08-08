#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
struct Node{
	int valor;
	struct Node * prox;
	struct Node * ant;
};

typedef struct Node node;

struct pilha{
	node * head;
	
};
typedef struct pilha pilha;
pilha * lista_inicia(){
	pilha * no = (pilha *)malloc(sizeof(pilha));
	no->head = NULL;
	return no;
}

bool vazia(pilha *P){
    if(P->head==NULL){
        return true;
    }
    return false;
}
void empilha(pilha * P, int valor){
	node * no = (node*)malloc(sizeof(node)+1);
	no->valor = valor;
	if(vazia(P)){
        no->prox=no;
        no->ant=no;
		P->head = no;
	
	}
	else if(P->head->prox == NULL){
		P->head->prox = no;
		P->head->ant = no;

		no->ant = P->head;
		no->prox = P->head;
	
	}else{
		P->head->ant = no;
		no->prox = P->head;
        node * percorre = P->head;
        percorre = percorre->prox->prox;
	    while(percorre->prox!=P->head){
		percorre = percorre->prox;
	    }
        no->ant = percorre;
		percorre->prox = no;
		percorre = no;
	
	}
}

void lista_imprime(pilha * P){
	node * percorre = P->head;
	printf("%d\n",percorre->valor);
	percorre = percorre->prox;
	while(percorre!=P->head){
		printf("%d\n",percorre->valor);
		percorre = percorre->prox;
	}
	//printf("\nInicio: %s\nFim: %s\n\n", P->inicio->nome, P->fim->nome);
}
void retira(pilha * P,int &x,int &tem){
    if(vazia(P)){
        printf("1");
        tem=0;
    }
    else{
        tem=1;
        if(P->head->prox==NULL){
            printf("2");
            x=P->head->valor;
            P=NULL;
        }
        else{
            printf("3");
            node * percorre = P->head;
	        while(percorre->prox!=P->head){
	        	percorre = percorre->prox;
	        }
            if(P->head==percorre){
                P->head=NULL;
            }
            else{
            P->head->ant=percorre->ant;
            percorre->ant->prox=P->head;
            x=percorre->valor;
            }
        }
    }
	//printf("\nInicio: %s\nFim: %s\n\n", P->inicio->nome, P->fim->nome);
}
int main(){
	int n;
	int i;
	int valor;	

	pilha * pilha = lista_inicia();

	scanf("%d", &n);
    
	for(i=1;i<=n;i++){
		scanf("%d",&valor);
		empilha(pilha, valor);
	}
    retira(pilha,i,n);
    retira(pilha,i,n);
    retira(pilha,i,n);
    retira(pilha,i,n);
	lista_imprime(pilha);

	return 0;
}