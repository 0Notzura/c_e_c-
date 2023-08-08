
#include <iostream>
#include<cmath>
using namespace std;

class Ponto2D{
    private:
    int  x,y;
    public:
    int getx();//metodo de retorno de x
    int gety();//metodo de retorno de y
    Ponto2D(int,int);//construtor
    //metodos de sobrecarga
    Ponto2D operator+(int);//sobrecarga do +
    bool operator<=(Ponto2D);//sobrecarga do < e =
    bool operator>=(Ponto2D);//sobrecarga do > e =
    bool operator==(Ponto2D);//sobrecarga do ==
    friend ostream &operator<<(ostream&, Ponto2D);//sobrecarga de saida
};
int Ponto2D::getx(){
    return x;
}
int Ponto2D::gety(){
    return y;
}
Ponto2D::Ponto2D(int a,int b){
    x=a;
    y=b;
};
Ponto2D Ponto2D::operator+(int i){
    Ponto2D p(x+i,y+i);
    return p;
}
bool Ponto2D::operator<=(Ponto2D p){
    if(sqrt(x+y)<=sqrt(p.getx()+p.gety())){
        return 1;
    }
    else{
        return 0;
    }
}
bool Ponto2D::operator>=(Ponto2D p){
    if(sqrt(x+y)>=sqrt(p.getx()+p.gety())){
        return 1;
    }
    else{
        return 0;
    }
}
bool Ponto2D::operator==(Ponto2D p){
    if(sqrt(x+y)==sqrt(p.getx()+p.gety())){
        return 1;
    }
    else{
        return 0;
    }
}
ostream &operator<<(ostream &out, Ponto2D p) {
	
	out <<"("<<p.getx()<<","<<p.gety()<<")"<<endl; 
	
   return out;	
}
