#include "FilaJogadores.h"

//  Construtor Padr�o
TadFila::TadFila()
{
    Ult = NULL;//vez
    Prim = NULL;
}

//  Destrutor - Esvazia a Fila de Jogadores
TadFila::~TadFila()
{
    bool ok;
    Jogador* j = NULL;

    while(!Vazia())
        Retira(ok, j);
}

//  Verifica se lista possui algum elemento
bool TadFila::Vazia()
{
    return (Prim == NULL) ? true : false;
}

//  Insere elemento no fim da fila
void TadFila::Insere(bool& ok, Jogador* x)
{
        NodePtr NodeAux = new Node;
        NodeAux->info = x;
        NodeAux->next = NULL;
        if(!Vazia())
            Ult->next = NodeAux;
        else
            Prim = NodeAux;
        Ult = NodeAux;
        NodeAux = NULL;
        ok = true;
        numj++;
}

//  Retira da fila, o primeiro elemento e o retorna
void TadFila::Retira(bool& ok, Jogador* x)
{
    if(!Vazia())
    {
        NodePtr NodeAux;
        x = Prim->info;
        NodeAux = Prim;
        Prim = Prim->next;
        delete NodeAux;
        NodeAux = NULL;
        ok = true;
    }
    else
        ok = false;
}

// Retira o Primeiro Jogador da fila e o passa para o �ltimo lugar
void TadFila::FimDaFila(bool& ok, Jogador* x)
{
    if(!Vazia())
    {
        Retira(ok, x);

        if(ok)
            Insere(ok, x);
    }
    else
        ok = false;
}

void TadFila::setaultima(string palavra){
    ultimaPalavra=palavra;
    vez++;
    if(vez>=numj)
        vez=0;
}
string TadFila::pegaodavez(){
    int i=0;
    string s;
    NodePtr no=Prim;
    while (i!=vez+1 )//usa o contador da lista para saber ate onde deve ir para pegar o dado
	{
        cout<<"---\n";
		no= no->next;
        if(no->next==NULL)
        no=Prim;
		i++;
	}
    
		s=no->info->Getnome();
        
		free(no);
		return s;
	
	
}
