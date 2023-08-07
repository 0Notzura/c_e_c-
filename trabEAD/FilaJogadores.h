#ifndef TADFILA_H
#define TADFILA_H

#include "ListaEnc.cpp"
#include "Jogador.cpp"

class TadFila
{
    public:
        TadFila();
        ~TadFila();
        bool Vazia();
        void Insere(bool &, Jogador*);
        void Retira(bool &, Jogador*);
        void FimDaFila(bool &, Jogador*);
        void setaultima(string );
        string getultimapalavra(){return ultimaPalavra;};
        int getvez(){return vez;};
        string pegaodavez();
        NodePtr Prim; // Primeiro n� da fila

    private:
        int vez=-1;
        int numj=0;
        string ultimaPalavra;
        NodePtr Ult;  // �ltimo n� da fila
};

#endif // TADFILA_H
