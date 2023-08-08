#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    float d,*tgi,*tgf,*ang,*angf,h;
    printf("\nDigite o angulo em graus.: ");
    scanf("%f", &(*ang));
    *tgi = tan(*ang*3.14159/180);
    printf("\nO tangente de %f = %f\n", ang, tgi);
    printf("\nDigite o angulo em graus.: ");
    scanf("%f", &(*angf));
    *tgf = tan(*angf*3.14159/180);
    printf("\nO tangente de %f = %f\n", angf, tgf);
    return 0;
}
