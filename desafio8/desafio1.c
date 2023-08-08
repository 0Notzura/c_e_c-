//Nome:Gabriel Mansano Pires
//RA:790951
#include<stdio.h>
int raizes(float x,float y,float z){
    float d,r1,r2;
    d=y*y-4*x*z;
    r1=(-y-sqrt(d))/(2*x);
    r2=(-y+sqrt(d)/(2*x));
    if (x==0){
        printf("Nao e uma funcao de segundo grau.");
    }
    else{
        if (d<0){
            printf("nao tem raizes reais.");
        }
        else{
            if (d==0){
                printf("Tem apenas 1 raiz real");
            }
            else{
                printf("As raizes reais sao %f e %f",r1,r2);
            }
        }
    }
    return 0;
}


int main(int argc, char const *argv[])
{
    float a,b,c;
    printf("Digite o numero que acompanha o x^2 (a) :");
    scanf("%f",&a);
    printf("Digite o numero ue acompanha o x(b) :");
    scanf("%f",&b);
    printf("Digite o numero que nao acompanha o x (c)");
    scanf("%f",&c);
    raizes(a,b,c);
    return 0;
}