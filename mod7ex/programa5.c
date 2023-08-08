//Nomes:Gabriel Mansano Pires
//Ra:790951
#include<stdio.h>
int main(int argc, char const *argv[])
{
    float x1,x2,media;
    printf("Digite a primeira nota: ");
    scanf("%f",&x1);
    printf("Digite a segunda nota: ");
    scanf("%f",&x2);
    if (x1>x2)
        printf("O menor e %f",x2);
    else {
        if(x2>x1)
            printf("O menor e %f",x1);
        else if (x1==x2)
            printf("Sao iguais");

    }
    return 0;
}