#include<stdio.h>
//Nomes:Gabriel Mansano Pires
//Ra:790951

int main(int argc, char const *argv[])
{
    int x,c;
    float r1,r2,rf;
    printf("Digite o numero que tera a raiz calculada");
    scanf("%d",&x);
    r1=1;
    r2=2;
    while (c!=0){
        printf(">>%f\n",r2);
        printf("><%f\n",r1);
        if (pow(r2,2)==x)
        {
            rf=r2;
            c=0;
        }
        else
        {   
            if (pow(r2,2)>x){
                rf=(x+pow(r1,2))/(2*r1);
                printf("<<%f\n",rf);
                c=0;
            }
        }
        r1=r1+1;
        r2=r2+1;

    }
    printf("A raiz e %f",rf);
    return 0;
}
