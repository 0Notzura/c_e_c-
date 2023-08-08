#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node{
	char nome[30];
	struct Node * prox;
	struct Node * ant;
};

typedef struct Node nodePtr;

struct lista{
    int contador;
	nodePtr * inicio;
	nodePtr * fim;
	int tamanho;
};

typedef struct lista lista;
lista * lista_inicia(){
	lista * novo = (lista *)malloc(sizeof(lista));
	novo->inicio = NULL;
	novo->fim = NULL;
	novo->tamanho = 0;
	return novo;
}
int listavazia(lista* l){
 
    if(l->tamanho==0 ){
        return 1;
    }
    return 0;
}
int listacheia(lista *li){
    return 0;
}
/* int estanalista (lista *li, char *nome){
    if(li->tamanho==0||li->tamanho==1){
        return 0;
    }
    else{
    nodePtr * percorre =li->inicio, * aux;
	while(percorre->prox != li->inicio){
        if(strcmp(percorre->nome,nome)==0){
            return 1;
        }
         printf("\n->%s %s %d\n",percorre->nome,nome,strcmp(percorre->nome,nome));
        percorre=percorre->prox; 
    }
    if(strcmp(percorre->nome,nome)==0){
        return 1;
    }
    return 0;
    }
}
 */

void insere(lista * l,nodePtr * no ){
    /* char c[50];
    strcpy(c,nome);
    if(estanalista(l,c) ){
        printf("O elemento ja esta na lista\n");
    } */
    
	    nodePtr * novo = (nodePtr*)malloc(sizeof(nodePtr));
	    memcpy(novo->nome, no->nome, strlen(no->nome)+1);
	    if(l->tamanho == 0){
	    	l->inicio = novo;
	    	l->fim =novo;
	    	l->tamanho++;
	    }
	    else if(l->tamanho == 1){
	    	l->inicio->prox = novo;
	    	l->inicio->ant = novo;
	    	l->fim = novo;
	    	novo->ant = l->inicio;
	    	novo->prox = l->inicio;
	    	l->tamanho++;
	    }else{
	    	l->inicio->ant = novo;
	    	novo->prox = l->inicio;
	    	novo->ant = l->fim;
	    	l->fim->prox = novo;
	    	l->fim = novo;
	    	l->tamanho++;
	    }
    
}
void remove(lista * l, nodePtr * no,bool * erro){
    /* char c[50];
    strcpy(c,nome);
    if(estanalista(l,c)==0 ){
        printf("o elemento nao esta na lista\n");
    } */
    if(listavazia(l)){
        printf("a fila esta vazia\n");
        *erro=true;
        return;
    }
	nodePtr * percorre =l->inicio, * aux;
	while(percorre->prox != l->inicio){
		if(strcmp(percorre->nome, no->nome)==0){
			if(percorre == l->inicio){
				l->inicio = percorre->prox;
				l->fim->prox = l->inicio;
				l->inicio->ant = l->fim;
				l->tamanho--;
				free(percorre);
                printf("1");
                *erro=false;
				return;
			}else {
				percorre->ant->prox = percorre->prox;
				percorre->prox->ant = percorre->ant;
				l->tamanho--;
				free(percorre);
                printf("2");
                *erro=false;
				return;
			}
		}
		percorre=percorre->prox;
	}
	if((strcmp(percorre->nome, no->nome)==0)&&(percorre == l->fim)){
		l->inicio->ant = l->fim->ant;
		l->fim = l->inicio->ant;
		l->fim->prox = l->inicio;
		l->tamanho--;
        printf("3");
        *erro=true;
		free(percorre);
		return;
	}    
}
void imprime(lista * l){
	nodePtr * percorre = l->inicio;
	printf("%s\n", percorre->nome);
	percorre = percorre->prox;
	while(percorre!=l->inicio){
		printf("%s\n", percorre->nome);
		percorre = percorre->prox;
	}
}
void libera(lista * l){
	nodePtr * percorre = l->inicio->prox;
	nodePtr * proximo;
	l->inicio = NULL;
	while(percorre->prox!=NULL){
		proximo=percorre->prox;
		free(percorre);
		proximo = percorre;
	}
	free(l);
}
nodePtr* pegaoprimeiro(lista* l,int &tem){
    nodePtr *no= (nodePtr*)malloc(sizeof(nodePtr));
    if(listavazia(l)){
        tem=0;
        return;
    }
    tem=1;
    *no->nome=*l->inicio->nome;
    l->contador=1;//sempre volta o contador a 1 quando a função é usada
    return no;
}
nodePtr* pegaoprox(lista* l,int &tem){
    
    nodePtr *aux=l->inicio;//cria um vetor que aponta pro mesmo lugar que a lista
    int i=0;
    if(listavazia(l)){
        tem=0;
        return ;
    }
 
    tem=1;
    while (i<l->contador )//usa o contador da lista para saber ate onde deve ir para pegar o dado
    {
        aux= aux->prox;
        i++;
    }
        l->contador++;//aumenta o contador em 1
        
        return aux;
   
   
}
int main(){
	int n;
	int i;
	char nome[30];
	int valor;	
    bool c;
    nodePtr * no = (nodePtr*)malloc(sizeof(nodePtr));

	lista * lista = lista_inicia(),*l= lista_inicia();
    

	scanf("%d", &n);

	for(i=0;i<n;i++){
		scanf("%s", no->nome);
        printf("%d",listavazia(lista));
		insere(lista, no);

        //printf("%d",estanalista(lista,"pires"));
	}
    /* scanf("%s", no->nome);
	insere(lista, no); */
    //remove(l,no,&c);
    imprime(lista);
    /* //printf("%d",estanalista(lista,"fdkgin"));
    printf("%d",c); */
	return 0;
}