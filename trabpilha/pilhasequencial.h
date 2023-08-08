#ifndef pilhasequencial_h_
#define pilhasequencial_h_
#include <stdio.h>
#include<stdlib.h>
#include <iostream>
using namespace std;

typedef struct{
    private:
        typedef struct parte{//cria uma estrutura que ira conter o elemento e o endereço do elemento seguinte
            int item;
            parte *prox;
        };
        int contador;
        parte *topo;//o elemento que esta no topo da pilha
    public:
        bool construtor(){//constroi a pilha
            topo=NULL;
            contador=0;
        }
        bool destrutor(){//destroi a pilha
            int c;
            parte *t;
            if (pilhavazia())
            {
                return false;
            }
            else{
                while(topo!=NULL){//apaga elemento por elemento enquanto o topo não for nulo
                    pop(c);
                }
                    return true;
            }
        }
        bool pilhavazia(){//confere se a pilha tem elementos
            if(topo==NULL){
                return true;
            }
            else{
                return false;
            }
        }        
        bool push(int valor){//adiciona um elemento na pilha
            parte *novaparte=(parte*)malloc(sizeof(parte));
            if(novaparte==NULL){
                return false;
            }
            else{
                novaparte->item=valor;
                novaparte->prox=topo;
                topo=novaparte;
                contador++;
                return true;
            }
        }
        
        bool pop(int &c){/*retira o valor do topo da pilha e coloca na variavel passada como parametro para que seja possivel saber qual elemento
        foi retirao*/
            parte *t;/*ponteiro pra armazenar o endereço do ponteiro topo para que após mudar o endereço de topo seja possivel apagar o endereço
            antigo*/
            if (pilhavazia())//conferindo se a pilha tem alguma elemento que possa ser apagado
            {
                return false;
            }
            else{
                c=topo->item;
                t=topo;
                topo=topo->prox;
                t->prox=NULL;
                free(t);
                contador--;
                return true;
            }
            
        }

} pilhaseq;



#endif