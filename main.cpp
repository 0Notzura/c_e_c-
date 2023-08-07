/*
Grupo 10, 14/04/2021
  Gabriel Mansano Pires, RA:790951, Ciência da Computação
  Geovanne Mansano Fritch da Silva, RA: 791072, Ciência da Computação
  Giovani Guidini, RA: 790862, Ciência da Computação
  Pedro Henrique Casarotto RA:790951, Engenharia da Computação

Objetivos: O progama tem como objetivo a criação das classes Pessoa, Cachorro, Peixe e Animal. A partir delas, é criada uma relação onde podemos associar animais a pessoas e imprimir suas respectivas características

*/

#include<iostream>
#include<string>	
#include<algorithm>
#include<vector>

#include "Animal.h"     
#include "Pessoa.h"
#include "Peixe.h"
#include "Cachorro.h"

using namespace std;
 
int main() {
Pessoa* pessoa = new Pessoa("Joao", 12);

Peixe* nemo = new Peixe("Nemo", 0.15, "Água salgada");

pessoa->adiciona(nemo);

Peixe* dory = new Peixe("Dory", 0.2, "Água doce");

pessoa->adiciona(dory);

Cachorro* teo = new Cachorro("Teo", 6.2, "pug");

pessoa->adiciona(teo);

cout << "================== TODOS ==================" << endl << endl;

pessoa->imprime(0);

cout << endl;

cout << "================== PEIXES ==================" << endl << endl;

pessoa->imprime(1);

cout << endl;

cout << "================== CACHORROS ==================" << endl << endl;

pessoa->imprime(2);

cout << endl;

cout << "================== REMOÇÃO DE UM ELEMENTO ==================" << endl << endl;

pessoa->remove("Dory");

pessoa->imprime(0);

return 0;

}