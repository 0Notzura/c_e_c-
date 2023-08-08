#include <stdio.h>
#include <stdlib.h>
#define MAX 10
 
// Protótipo da função 
void insercao(int *a);
void selecao(int *a);
int main(int argc, char** argv)
{
    int i, v[MAX];
 
 // Le os valores
    for(i = 0; i < MAX; i++){
        printf("Digite um valor: ");
        scanf("%d", &v[i]);
    }
 
 // faz a ordenação
    selecao(v);
 
// Imprime os valores em ordem
    printf("Valores em ordem\n");
    for(i = 0; i < MAX; i++){
        printf("%d\n", v[i]);
    }
    return 0;
}
//Ordenação por Inserção
void insercao(int *a)
{
    int i, j, c;
  
    for(i = 1; i < MAX; i++){
        c = a[i];
        for(j = i-1; j >= 0 && a[j]> c ; j--){
            a[j+1] = a[j];
        }
        a[j+1] = c;
    }       
}
void selecao(int *a){
    int menor,i,j,c;
    for(i=0;i<MAX;i++){
        menor=i;
        for (j = i+1; j<MAX;j++)
        {
            if(a[menor]>a[j]){
                menor=j;
            }
        }
        if(i!=menor){
            c=a[i];
            a[i]=a[menor];
            a[menor]=c;

        }
    }

}