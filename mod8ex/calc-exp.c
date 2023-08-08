//Nome:Gabriel Mansano Pires
//RA:790951
#include<stdio.h>
int exp(int n,int b){//função pra fazer exponenciação
    int k;
    k=b;
    if (n==0){
        return 1;
    }
    else{
    k=k*exp((n-1),b);
        return k;
    }
    
}
int main(){
    int b,e;
    printf("Digite a base  :");
    scanf("%d",&b);
    printf("Digite o expoente :");
    scanf("%d",&e);
    printf("%d",exp(e,b));

}