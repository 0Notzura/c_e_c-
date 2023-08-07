/*Arquivo ListaEnc.cpp, implementa um registro de Lista Encadeada e define seu ponteiro*/
#include "Jogador.h"
typedef struct RegNode Node ; // Define o tipo Node para o registro Nó
typedef Node * NodePtr; // Define o tipo NodePtr para o ponteiro Node

/*Registro Nó da lista Encadeada*/
struct RegNode
{
    Jogador* info;  //Informação armazenada no Nó
    NodePtr next; // Ponteiro para o próximo Nó da lista
};
