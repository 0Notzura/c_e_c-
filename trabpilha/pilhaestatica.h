#ifndef pilhaestatica_h_
#define pilhaestatica_h_
#include <stdio.h>
#include<stdlib.h>
#include <iostream>
using namespace std;
#define max 10//numero maximo de elementos da pilha

typedef struct{
    private:
    int itens[max];
    int topo;
    public:
    void iniciapilha(){//inicia a pilha com -1 para que depois se topo=-1 o programa saiba que a pilha esta vazia
        topo=-1;
    }
    int pilhavazia(){//consefere se a pilha esta vazia
        if(topo==-1){
            return 1;
        }
        else{
            return 0;
        }
    }
    int pilhacheia(){//confere se a pilha esta cheia
        if(topo==max-1){//é max-1 pois o topo é o index da e o index começa em 0 ,não em 1 
            return 1;
        }
        else{
            return 0;
        }
    }
    void push(int a){//coloca um novo elemento no topo da pilha
        if(pilhacheia()){//confere se é possivel adicionar um elemento
            cout << "ERRO:pilha cheia";
        }
        else{
            topo++;
            itens[topo]=a;
        } 
    }
    int pop(){//tira o elemento do topo da pilha
        if(pilhavazia()){//confere se é possivel tirar um elemento
            cout <<"ERRO:pilha vazia";
            return 0;
        }
        else{
            int c;
            c=itens[topo];
            topo--;
            return c;
        }
    }   

} pilha;


#endif