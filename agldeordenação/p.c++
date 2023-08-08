#include <stdio.h>
#include<stdlib.h>
#include<string.h>

struct node
{
    int valor;
    struct node *esq;
    struct node *dir;
};
typedef struct node arv;


arv* cria(int c){
    arv *no=(arv*) malloc(sizeof(arv));
    no->dir=NULL;
    no->esq=NULL;
    no->valor=c;
    return no;
}
void inserirDireita(node *no,int i);
// procedimento para inserir um elemento na subárvore esquerda
void inserirEsquerda(node *no, int valor) {
    if(no->esq == NULL) {
        no->esq = cria(valor);
    } else {
        if(valor < no->esq->valor)
            inserirEsquerda(no->esq, valor);
        if(valor > no->esq->valor)
            inserirDireita(no->esq, valor);
    }
}

// procedimento para inserir um elemento na subárvore direita
void inserirDireita(node *no, int valor) {
    if(no->dir == NULL) {
        no->dir = cria(valor);
    } else {
        if(valor > no->dir->valor)
            inserirDireita(no->dir, valor);
        if(valor < no->dir->valor)
            inserirEsquerda(no->dir, valor);
    }
}

/*
    Procedimento para inserir um elemento na árvore
    faz uso dos dois procedimentos anteriores,
    inserindo à esquerda ou à direita
*/
void inserir(node *R, int ch) {
    if(R == NULL) {
        R = cria(ch);
    } else {
        if(ch < R->valor)
            inserirEsquerda(R, ch);
        if(ch > R->valor)
            inserirDireita(R, ch);
    }
}

/*  nova versão para a inserção, mais resumida
    perceba que agora é uma função
*/
/* No* inserirNovaVersao(No *raiz, int valor) {
    if(raiz == NULL) {
        No *novo = (No*)malloc(sizeof(No));
        novo->conteudo = valor;
        novo->esquerda = NULL;
        novo->direita = NULL;
        return novo;
    } else {
        if(valor < raiz->conteudo)
            raiz->esquerda = inserirNovaVersao(raiz->esquerda, valor);
        if(valor > raiz->conteudo)
            raiz->direita = inserirNovaVersao(raiz->direita, valor);
        return raiz;
    }
} */

// função que retorna o tamanho de uma árvore
/* int tamanho(No *raiz) {
    if(raiz == NULL)
        return 0;
    else
        return 1 + tamanho(raiz->esquerda) + tamanho(raiz->direita);
} */

void imprimir(node *arv) {
    if(arv != NULL) {
        imprimir(arv->esq);
        printf("%d ", arv->valor);
        imprimir(arv->dir);
    }
}

// função para a remoção de um nó

/* void imprime(arv* a){
    if(a!=NULL){
        imprime(a->esq);
        printf("\n%d",a->valor);
        imprime(a->dir);
    }
} */
 
 
 
int main() {
    int op, valor;
    arv *arv;
    arv = NULL;

    node *raiz = NULL;


            printf("Digite um valor: ");
            scanf("%d", &valor);
            inserir(arv, valor);// não precisa da estrutura ArvB
            //inserir(&arv, valor);// para utilizar esta inserção, comente a anterior
            printf("\nImpressao da arvore binaria:\n");
            imprimir(raiz);
            printf("\n");
        
}