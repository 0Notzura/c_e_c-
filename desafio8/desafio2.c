//Nome:Gabriel Mansano Pires
//RA:790951
#include<stdio.h>
int quociente(int x,int y){
    return (x/y);
}
int resto(int e,int z){
    return(e%z);
}
int main(int argc, char const *argv[])
{
    int n1,n2;
    printf("Digite um numero :");
    scanf("%d",&n1);
    printf("Digite outro numero :");
    scanf("%d",&n2);
    printf("A divisao de %d/%d tem quociente e %d e o resto e %d ",n1,n2,quociente(n1,n2),resto(n1,n2));
    return 0;
}
