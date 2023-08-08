//Nome:Gabriel Mansano Pires
//RA:790951
#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    float x,v,c1,c2,f,ex,ra,rc;//f=resultado do fatorial,ra=resultado do seno calculado pelo programa//ex=exponecial
    int c3;
    printf("escreva o angulo em graus :");
    scanf("%f",&v);
    f=1;
    c1=1;
    c2=1;
    c3=1;
    x=(v/180)*3.141592;//transformação do abgulo em graus para radianos
    rc=sin(x);
    while(c2<=9){//loop pra obtenção do resultado 
        ex=pow(x,c2);
        while (c1<=c2)//loop pra calculo do fatorial
        {
            f=f*c1;
            
            c1++;
        }
        if (c3%2==1){
            ra=ra+(ex/f);
        }
        else{
            ra=ra-(ex/f);
        }
        c3=c3+1;
        c2=c2+2;
        printf("O valor parcial de sen(%.2f) sao %f\n",v,ra);//saida do seno calculado pelo programa
    }
    printf("E de acordo com a funcao sin(), o sen(%f) e %f",v,rc);//saida do seno calculado pela função sin()
    return 0;
}