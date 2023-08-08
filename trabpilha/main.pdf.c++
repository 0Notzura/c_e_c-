#include "pilhaestatica.h"
#include "pilhasequencial.h"
//como a pilha é passada por valor a alteração de valores dentro das funções, os valores da pilha que foi passada não são alterados
void printe(pilha pilha){//escreve na tela o valor do topo de uma pilha estatica
        int c=pilha.pop();
        cout<< "elemento que esta no topo da pilha estatica :";
        cout << c;
        cout << "\n";
    }
void printd(pilhaseq pilha){//escreve oo valor do topo de uma pilha dinamica
    int c;
    pilha.pop(c);
    cout<< "elemento que esta no topo da pilha dinamica: ";
    cout << c;
    cout << "\n";
}
void numdelem_e(pilha c){//numero de elementos de uma pilha estatica
    int contador=0;
    while(c.pilhavazia()!=true){
        c.pop();
        contador++;
    }
    cout<<"numero de elementos da pilha estatica :";
    cout<<contador;
    cout<<"\n";
}
void numdelem_d(pilhaseq c){//numero de elementos de uma pilha dinamica
    int contador=0,d;
    while(c.pilhavazia()!=1){
        c.pop(d);
        contador++;
    }
    cout<<"numero de elementos da pilha dinamica:";
    cout<<contador;
    cout<<"\n";
}
int main()
{
   pilha p;//teste da pilha estatica
    p.iniciapilha();
    p.push(3);
    p.pop();
    p.push(5);
    p.push(3);
    p.push(4);
    p.push(5);
    printe(p);
    numdelem_e(p);

    pilhaseq p2;//teste da pilha sequencial 
    int c,d;
    p2.construtor();
    p2.push(5);
    p2.push(4);
    p2.push(6);
    p2.push(6);
    p2.push(8);
    p2.pop(c);
    printd(p2);
    numdelem_d(p2);
    p2.destrutor();

    return 0; 
}