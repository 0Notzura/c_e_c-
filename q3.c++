#include<string>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
//declaração de metodos e membros da classe obra
class Obra{
    private:
    string titulo,artista;
    int ano;
    public:
    Obra(string,string,int);//construtor
    string getArtista();//retorna o nome do artista
    string getTitulo();//retorna o titulo da obra
    int getAno();//retorna o ano
    virtual char getCategoria()=0;//abstração
    virtual void imprime();//metodo pra imprimir os membros da clas
};
Obra::Obra(string t,string a,int ano){
    titulo=t;
    artista=a;
    ano=ano;
}
string Obra::getArtista(){
    return artista;
}
string Obra::getTitulo(){
    return titulo;
}
int Obra::getAno(){
    return ano;
}
void Obra::imprime(){
    cout<<ano<<endl;
    cout<<titulo<<endl;
    cout<<artista<<endl;

}
//declaração de metodos e membros da classe Escultura
class Escultura:public Obra{
    private:
    float altura;
    public:
    Escultura(string,string,int,float);//construtor
    float getAltura();//metodo que retorna a altura da escultura
    virtual char getCategoria();//retorna a categoria da obra como sendo Escultura
    virtual void imprime();//impressão dos membros de obra e da altura
};


Escultura::Escultura(string t,string a,int ano,float al):Obra(t,a,ano){
    altura=al;
}
float Escultura::getAltura(){
    return altura;
}
char Escultura::getCategoria(){
    return 'E';
}
void Escultura::imprime(){
    Obra::imprime();
    cout<<altura<<endl;
}
//declaração de metodos e membros da classe Pintura
class Pintura:public Obra{
    private:
    string material;
    public:
    string getMaterial();//metodo que retorna o material utilizado
    Pintura(string,string,int,string);//construtor
    virtual char getCategoria();//retorna a categoria da obra como sendo pintura
    virtual void imprime();//impressão dos membros de obra e do material
};
Pintura::Pintura(string t,string a,int ano,string m):Obra(t,a,ano){
    material=m;
}
string Pintura::getMaterial(){
    return material;
}
char Pintura::getCategoria(){
    return 'P';
}
void Pintura::imprime(){
    Obra::imprime();
    cout<<material<<endl;
}
//declaração de metodos e do ponteiro para armazenar as obras da classe Catalogo
class Catalogo{
    private:
    vector<Obra*>obras;
    public:
    bool adicionaObra(Obra*);//adicona um ponteira de obra que aponta para uma classe filha
    Obra* obtemObra(string);//retorna um ponteira de obra que aponta para uma classe filha
    bool removeObra(string);//remove um ponteira de obra que aponta para uma classe filha
    void imprime(int);//imprime,dependendo do parametro,todas as obras ou só as pinturas oou só as esculturas
    int qtdeObras();//retorna o numero total de obras
    int qtdePinturas();//retorna só o numero de pinturas    
    int qtdeEscutlturas();//retorna só o numero de esculturas   
};
bool Catalogo::adicionaObra(Obra*o){
    obras.push_back(o);
    return true;
}
Obra* Catalogo::obtemObra(string s){
    int i,tam;
    tam=obras.size();
    
    for ( i = 0; i < tam; i++)
    {
        if(s==obras[i]->getTitulo()){
            return obras[i];
        }
        
            return 0; 
    }
}
bool Catalogo::removeObra(string s){
    int i,tam;
    tam=obras.size();
    for ( i = 0; i < tam; i++)
    {
        if(s==obras[i]->getTitulo()){
            obras.erase(obras.begin() + i);//metodo para apagar um vecto
            return 1;
        }
    }
    return 0;
}
int Catalogo::qtdeObras(){
    return obras.size();
}

int Catalogo::qtdePinturas(){
    int i,r=0;
    for ( i = 0; i < obras.size(); i++)
    {
        if(obras[i]->getCategoria()=='P'){
            r=r+1;
        }
    }
    return r;
}
int Catalogo::qtdeEscutlturas(){
    int i,r=0;
    for ( i = 0; i < obras.size(); i++)
    {
        if(obras[i]->getCategoria()=='E'){
            r=r+1;
        }
    }
    return r;
}
////////////////////////////////////////
void Catalogo::imprime(int criterio){//dependendo do criterio decide que tipo de animal sera escrito
    int i,j,tam;
    tam=obras.size();
    vector <string> a;
    for (i = 0; i < tam; i++)
    {
        a.push_back(obras[i]->getTitulo());
    }
    sort(a.begin(),a.end());

  //Impressão de dados dos animais
    for ( i = 0; i < tam; i++){   
        for ( j = 0; j < tam; j++){

            //Todos dos animais
            if(criterio == 0){
                if(a[i]==obras[j]->getTitulo()){
                    obras[j]->imprime();
                }
            }

            //Somente os peixes
            else if(criterio==1){
              if(obras[j]->getCategoria()=='E'){
                  if(a[i]==obras[j]->getTitulo()){
                      obras[j]->imprime();
                    }
              }
            }

            //Somente os cachorros
            else if(criterio==2){
              if(obras[i]->getCategoria()=='P'){
                  if(a[i]==obras[j]->getTitulo()){
                      obras[j]->imprime();
                  }
              }
            }

        }
    }

}
