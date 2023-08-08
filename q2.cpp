#include<string>
#include<iostream>
using namespace std;
template<class T>
class Generics{
    private:
    T t1,t2,t3;
    public:
    
    static T mediana(T ,T ,T );
};

template<class T>
T Generics<T>::mediana(T a,T b,T c){
    if (a!=b && a!=c && b=!c){
        if (a<b && a>c || a>b && a<c){
            return a;
        }
        else if(b<a && b>c || b>a && b<c){
            return b;
        }
        else if(c<a && c>b || c>a && c<b){
            return c;
        }
    }
    else if(a==b){
        return a;
    }
    else if(a==c){
        return a;
    }
    else if(c==b){
        return b;
    }
    else if(a==b==c){
        return a;
    }
}
//os tipos podem ser inteiro float e double
int main(int argc, char const *argv[])
{
    Generics<int> g;
    Generics<float> g2;
    Generics<double> g3;
    cout<<g.mediana(1,2,3);
    cout<<g2.mediana(1.2,2.3,3.4);
    cout<<g3.mediana(1.54895646349,2.3905235235,3.39402352379);
    return 0;
}
