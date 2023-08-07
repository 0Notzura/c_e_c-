#include "Jogador.h"

int Jogador::nmrJogadores = 0; // Inicializa n�mero de jogadores como 0

Jogador::Jogador(string nome)
{
    ++nmrJogadores; // Incrementa n�mero de jogadores

    if(nome == "")
        Setnome("Jogador " + to_string(nmrJogadores));  // Inicializa nome do jogador como Jogador n, caso nome n�o seja informado
    else
        Setnome(nome);

}
