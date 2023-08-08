#ifndef filaequencial_h_
#define filaequencial_h_
#include <stdio.h>
#include<stdlib.h>
#include <iostream>
#define max 10
using namespace std;

typedef struct elemento{
    int num;
    elemento *prox;
};

class filad{
    private:
    elemento *inicio;
    elemento *fim;
    
    public:
    filad(){//constroi a fila
            inicio=NULL;
            fim=NULL;
        }
    ~filad(){//destroi a fila
            int c;
            while(inicio!=NULL){//apaga elemento por elemento enquanto o inicio não for nulo
                pop(c);
                }                    
    } 
    bool vazia(){//confere se a pilha esta vazia conferindo se o inicio tem algo ou não
        if(inicio==NULL){
            return true;
        }
        else{
            return false;
        }
    }
    void push(int c){
        elemento *e=(elemento*)malloc(sizeof(elemento));//cria um novo elemento que recebera o valor passado
        e->num=c;
        e->prox=NULL;
        if(vazia()){
            inicio=e;//faz o inicio apontar pro elemento caso a fila esteja vazia

        }
        else{
            fim->prox=e;//faz com que o elemento anterior que esta armazenado em fim passe a ter um ponteio que aponte pro proximo elemento
        }
        fim=e;//faz o fim apontar pro elemento que esta atualizado
    }
    void pop(int &c){
        if(vazia()){//confere se a pilha tem algum elemento que possa ser tirado
            cout<<"ERRO:Fila vazia";
        }
        else{
            elemento *e=(elemento*)malloc(sizeof(elemento));//cria um ponteiro que ira armazenar temporariamento o inicio para apagar sua conexão
            //como forma de segurança
            c=inicio->num;
            e=inicio;
            inicio=inicio->prox;
            e->prox=NULL;
            free(e);
        }
    }
};
#endif


