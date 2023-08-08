#ifndef filaestatica_h_
#define filaestatica_h_
#include <stdio.h>
#include<stdlib.h>
#include <iostream>
#define max 10
using namespace std;
class 
filae
{
    /* private:
    int elementos[max],final,inicio,ttele; */
    private:
        int elementos[max],final,inicio,ttele;
    public:
        filae(){//cria a fila
            final=0;
            inicio=0;
            ttele=0;
        }
        bool vazia(){//confere se a fila esta vaia vendo o numero total de elementos
            if(ttele==0){
                return true;
            }
            else{
                return false;
            }
        }
        bool cheia(){//confere se a fila esta cheia vendo o numero total de elementos
            if(ttele==max){
                return true;
            }
            else{
                return false;
            }
        }
        void push(int c){
            if(cheia()){
               /*  cout<<ttele;
                cout<<"A fila esta cheia\n";
                cout<<"o elemento esta em:";
                cout<<elementos[inicio];
                cout<<"\n";
                cout<<"o fim esta em :";
                cout<<final;
                cout<<"\n";
                cout<<"o c esta em :";
                cout<<c;
                cout<<"\n"; */
                cout<<"A fila esta cheia\n";
            }
            else{//faz o elemento da fila que esta vazio receber o valor e aumento o final e o ttele
                elementos[final]=c;
                final++;
                ttele++;
                if(final==max){
                    final=0;
                }
            }
        }
        void pop(int &c){
            if(vazia()){
                /* cout<<"a fila esta vazia";
                cout<<"o elemento esta em:";
                cout<<elementos[inicio];
                cout<<"\n";
                cout<<"o fim esta em :";
                cout<<final;
                cout<<"\n";
                cout<<ttele;
                cout<<"\n"; */
                cout<<"a fila esta vazia \n";
            }
            else{
                c=elementos[inicio];
                inicio++;
                ttele--;
                if( ttele==0){//caso o ttele esteja vazio após o pop,o inicio e o final voltam a 0
                        inicio=0;
                        final=0;
                }
            }

        }
};
#endif


