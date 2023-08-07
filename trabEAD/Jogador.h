#ifndef JOGADOR_H
#define JOGADOR_H

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

class Jogador
{
    public:
        Jogador(string nome = "");
        //Getters e Setters
        string Getnome() const{ return nome; }
        void Setnome(string val) { nome = val; }
        /* string GetultimaPalavra() const{ return ultimaPalavra; }
        void SetultimaPalavra(string val) { ultimaPalavra = val; } */

        //Contador de jogadores
        static int nmrJogadores;
    private:
        string nome; // Nome do Jogador
        /* string ultimaPalavra; */ // Ultima Palavra incluida por ele
};

#endif // JOGADOR_H
