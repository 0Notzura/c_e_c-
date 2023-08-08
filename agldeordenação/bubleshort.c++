#include <stdio.h>
#include<stdlib.h>
#define MAX 6
void bublesort(int *v,int n){
    int i,j,aux,c;
    bool tt=false;
    c=n;
    for ( i = 0; i < n-1; i++)
    {
        for(j=0;j<c;j++){//ordenação
            if(v[j]>v[j+1]){
                aux=v[j];
                v[j]=v[j+1];
                v[j+1]=aux;
                tt=true;
            }
        } 
        if(!tt){//otimização interromper processo de ordenação quando em uma mesma “passada”,nenhuma troca for efetuada.
            return ;
        }
        tt=false;
        c--;//otimização reduzir o número de elementos a serem comparados em cada chamada.
    }

}

int main(int argc, char const *argv[])
{
    int i,v[6]={90,29,7,12,34,47},v2[6]={90,47,34,29,12,7};
    int tam=MAX;
    bublesort(v2,tam);
    for ( i = 0; i < 6; i++)
    {
        printf("\n%d",v2[i]);
    }
    
    return 0;
}


