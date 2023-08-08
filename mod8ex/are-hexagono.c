//Nome:Gabriel Mansano Pires
//RA:790951
#include <stdio.h>
#include<math.h>
float Acal(float n){//calculo da area
    float a;
    a=(3*n*n*sqrt(3))/2;
    return a;
}
float Pcal(float n){//calculo do perimetro
    float p;
    p=6*n;
    return p;
}
int main(int argc, char const *argv[])
{
    float l;
    printf("Digite o lado do hexagono :");
    scanf("%f",&l);
    printf("A area vale %f.\nO perimetro vale %f.",Acal(l),Pcal(l));
    return 0;
}
    
