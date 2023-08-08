//Nomes:Gabriel Mansano Pires
//Ra:790951
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int c,n,r;
    scanf("%d",&n);
    r=1;
    c=2;
    if (n==0 || n==1){
        r=0;
    }
    else{ 
        if (n==2){
            r=1;            
        }
        else{
            while(r!=0 && c<n){
                if (n%c==0){
                    r=0;
                }
                c=c+1;               
            }
        }
    }
    if (r==1){
        printf("%d e primo.",n);
    }
    else
    {
        printf("%d nao e primo.",n);
    }
    
    return 0;
}