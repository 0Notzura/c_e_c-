#include<stdio.h>
int exp(int a,int b){
    while(a>1){
        b=b*b;
        a=a-1;
    }
    return b;
}
int main(){
    int b,e;
    printf("Digite a base  :");
    scanf("%d",&b);
    printf("Digite o expoente :");
    scanf("%d",&e);
    printf("%d",exp(e,b));

}