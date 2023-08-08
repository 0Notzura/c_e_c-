#include<stdio.h>
/*int exp(int n,int b){
    int k;
    k=b;
    if (n==0){
        return 1;
    }
    else{
    k=k*exp((n-1),b);
        return k;
    }
    
}
int main(){
    int b,e;
    printf("Digite a base  :");
    scanf("%d",&b);
    printf("Digite o expoente :");
    scanf("%d",&e);
    printf("%d",exp(e,b));

}*/
int converte(float r, int c){
    float d;
    switch(c){
     case 1:
        d=r*(1/5.47);
        printf("convertendo vai dar %f dolares ",d);
    case 2:
        d=r*(1/6.45);
        printf("convertendo vai dar %f euros",d);
    case 3:
        d=r*(1/7.17);
        printf("convertendo vai dar %f libras",d);
    }

}
int main(){
    float r;
    int c;
    printf("Digite quantos reais serao convertidos :");
    scanf("&f",&r);
    printf("1 para dolar,2 para euro,3 para libra");
    scanf("%d",&c);
    convert(r,c);
return 0;
}