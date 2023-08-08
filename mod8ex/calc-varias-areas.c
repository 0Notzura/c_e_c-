/*#include<stdio.h>
int exp(int *n,int *b){//função pra fazer exponenciação
    (*n)=(*n)+(*b);
    (*b)=(*n)-(*b);
    (*n)=(*n)-(*b);
    
    
}
int main(){
    int x,y;
    printf("Digite a base  :");
    scanf("%d",&x);
    printf("Digite o expoente :");
    scanf("%d",&y);
    exp(&y,&x);
    printf("%d",x);

}
int soma (int p1, int p2)

{

      p1 += p2;

      return p1;

}

int main()

{

      int v1 = 3, v2 = 5;

      printf("%d\n",soma(v1,v2));

      return 0;

}*/
#include <stdio.h>
 
int main(int argc, char const *argv[])
{
  struct area{
    float a;
    float b;
    float c;
    float ac;
    float at;
    float ar;
    float atr;
    float aq;

  };
  struct area area1;
  printf("Digite o valor de a :");
  scanf("%f",&area1.a);
  printf("Digite o valor de b :");
  scanf("%f",&area1.b);
  printf("Digite o valor de c :");
  scanf("%f",&area1.c);
  area1.ac=3.14159*area1.c*area1.c;
  area1.at=(area1.a*area1.c)/2;
  area1.aq=area1.b*area1.b;
  area1.ar=area1.b*area1.a;
  area1.atr=(area1.a+area1.b)*area1.c/2;
  printf("TRIANGULO: %.3f\n",area1.at);
 printf("CIRCULO: %.3f\n",area1.ac);
 printf("TRAPEZIO: %.3f\n",area1.atr);
 printf("QUADRADO: %.3f\n",area1.aq);
 printf("RETANGULO: %.3f\n",area1.ar);
  return 0;
}
