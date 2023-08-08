//Nomes:Gabriel Mansano Pires
//Ra:790951
#include<stdio.h>

int main(int argc, char const *argv[])
{
    int v,c,r;
    printf("Escreva o numero :");
    scanf("%d",&v);
    r=1;
    c=1;
    while (c<=v){
        r=r*c;
        c=c+1;
    }
    printf("%d",r);
    return 0;
}
