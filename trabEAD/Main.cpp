#include "FilaJogadores.cpp"
#include "final.c++"
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
typedef Jogador * JogadorPtr;
int main()
{
    TadFila f;
    Lista l;
    bool ok;
    int n,c;
    string nome;
    string palavra;

    cout << "Quantos jogadores vao jogar? " ;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Nome do Jogador " << i << ":";
        cin >> nome;
        JogadorPtr j = new Jogador(nome);
        f.Insere(ok, j);
    }
        while(c!=1){
        printf("escreva a palavra :");
        cin >> palavra;
        if(!l.vazia()){
            if(l.pegaletraultimo()!=palavra[0] || l.existe(palavra)/* || palavra[0]==f.getultimapalavra()[f.getultimapalavra().size()] */ ){
                cout<<"errado\n";
                cout<<"O jogador "+f.pegaodavez()+" perdeu";
                c=1;
            }
            else{

                f.setaultima(nome);
                l.inserir_inicio(palavra);
            }
        }
        else{
            f.setaultima(nome);
            l.inserir_inicio(palavra);
        }
        
    } 
    //cout<<"O jogador "+f.pegaodavez()+" perdeu";
    return 0;
}
