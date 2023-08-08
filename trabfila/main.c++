#include "filadinamica.h"
#include "filaestatica.h"
void printfilad(filad &f){
    int c;
    filad fd;
    while (f.vazia()==false){//enquanto a fila passada como parametro não fique vazia,é retirado um de seus elementos e alocado em outra temporariamente
        f.pop(c);
        cout<<"\n"<<c;//imprime o c toda vez que um elemento é retirado
        fd.push(c);
    }
    while(fd.vazia()==false){//retorna os elementos que estavam na fila temporaria para a original
        fd.pop(c);
        f.push(c);
    }

}
void printultimod(filad &f){//funciona da mesma forma que o printfilad,mas ao inves de imprimer o c toda vez que um elemento é retirado
    //ele só imprime depois de todos os elementos terem sido retirados
    int c;
    filad fd;
    while (f.vazia()==false){
        f.pop(c);
        fd.push(c);
    }
    cout<<"\n"<<c;
    while(fd.vazia()==false){
        fd.pop(c);
        f.push(c);
    }
}
//funciona da mesma forma qua os prints da filad,mas com filae como parametro
void printfilae(filae &f){
    int c;
    filae fe;
    while (f.vazia()==false){
        f.pop(c);
        cout<<"\n"<<c;
        fe.push(c);
    }
    while(fe.vazia()==false){
        fe.pop(c);
        f.push(c);
    }
    

}
void printultimoe(filae &f){
    int c;
    filae fe;
    while (f.vazia()==false){
        f.pop(c);
        fe.push(c);
    }
    cout<<"\n"<<c;
    while(fe.vazia()==false){
        fe.pop(c);
        f.push(c);
    }
    

}
int main(int argc, char const *argv[])
{   int c;
    filad fd;
    filae fe;
    fe.push(1);
    fe.push(2);
    fe.push(3);
    fe.pop(c);
    printultimoe(fe);
    cout<<"\n";
    printfilae(fe);
    cout<<"\n"; 
    //teste fila diinamida
    fd.push(3);
    fd.push(2);
    fd.push(1);
    fd.pop(c);
    /* printultimoe(fe);
    cout<<"\n"; */
    printfilad(fd);
    cout<<"\n"; 
    printultimod(fd);
    return 0;
}
