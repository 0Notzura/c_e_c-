//Nomes:Gabriel Mansano Pires
//Ra:790951
#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    float x1,x2,y1,y2,rp1,rp2,r;
    printf("Digite x1 :");
    scanf("%f",&x1);
    printf("Digite x2 :");
    scanf("%f",&x2);
    printf("Digite y1 :");
    scanf("%f",&y1);
    printf("Digite y2 :");
    scanf("%f",&y1);
    rp1=pow((x1-x2),2);
    rp2=pow((y1-y2),2);
    r=sqrt(rp1+rp2);
    printf("%f",r);
    return 0;
}
