#include<stdio.h>
#include<stdlib.h>
void CorrigeHeapSubindo(int *head,int lastposition){
    int pai,aux;
    pai=(lastposition-1)/2;
    while(pai>=0 && head[pai]<head[lastposition]){
        aux=head[pai];
        head[pai]=head[lastposition];
        head[lastposition]=aux;
        lastposition=pai;
        pai=(pai-1)/2;
    }
}

int main(int argc, char const *argv[])
{   int i;
    int v[8]={23,19,18,15,17,14,16,30};
    CorrigeHeapSubindo(v,7);
    for ( i = 0; i < 7; i++)
    {
        printf("\n%d",v[i]);
    }
    
    return 0;
}



