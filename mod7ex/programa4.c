//Nomes:Gabriel Mansano Pires
//Ra:790951
#include<stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    float n1,n2,n3,va,vp,vh;
    char l;
    printf("Escreva a primeira nota :");
    scanf("%f",&n1);
    printf("Escreva a segunda nota :");
    scanf("%f",&n2);
    printf("Escreva a terceira nota :");
    scanf("%f",&n3);
    printf("Escreva  a media que voce quer [A pra aritimetica][P pra ponderada][H pra harmonica]");
    scanf("%*c%c",&l);
    if (l=='a' || l=='A'){
        va=(n1+n2+n3)/3; 
        printf("%f",va);
    }
    else{
        if (l=='P' || l=='p'){
            vp=(n1*5+n2*3+n3*2)/10;
            printf("%f",vp);
        }
        else{
            if (l=='h' || l=='H'){
                vh=3/(1/n1*1/n2*1/n3);
                printf("%f",vh);
            }
        }
    }
    return 0;
}
