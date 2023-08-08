#include<stdio.h>
int dividir(int A, int B)
{   int c;
    c=0;
    if (A<0){
        A=-A;
        c=1;
    }
    if (B<0){
        B=-B;
        c=c+1;
    }
    if (A < B){ return 0;};
    if (c==0 ||c==2){
    return 1 + dividir(A-B,B);
    }
    else{
        if (c==1 )
            return (-1 - dividir(A-B,B));

    }
}
int main(){
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    printf("%d",dividir(a,b));
    return 0;
}