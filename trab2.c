#include <stdio.h>
#include <stdlib.h>
#define MAX 100

unsigned long long Merge(int arr[], int aux[], int p, int m, int r)
{
    int k=p,i=p,j=m+1;
    unsigned long long valor = 0;

    // enquanto houver elementos nas execuções esquerda e direita
    while (i <= m && j <= r){
        if (arr[i] <= arr[j]){
            aux[k++] = arr[i++];
        }
        else{
            aux[k++]=arr[j++];
            valor+=(m-i+1);
        }
    }

    // copia os elementos restantes
    while (i <= m){
        aux[k++] = arr[i++];
    }
    // copia de volta para o array original para refletir a ordem ordenada
    for (int i = p; i <= r; i++){
        arr[i] = aux[i];
    }

    return valor;
}

unsigned long long MergeSort(int arr[], int aux[], int p, int r)
{
    
    if (r <= p){ // retorna se o tamanho da execução <= 1
        return 0;
    }

    int m = (p + ((r - p) >> 1));//ponto medio
    unsigned long long valor = 0;

    // divide/merge metade esquerda
    valor += MergeSort(arr, aux, p, m);

    // divide/merge metade direita
    valor += MergeSort(arr, aux, m + 1, r);

    // mescla as duas meias corridas
    valor += Merge(arr, aux, p, m, r);

    return valor;
}
/* void imprime(int v[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", v[i]);
    printf("\n");
} */

int main(int argc, char *argv[])
{
    char file_name[MAX];
    FILE *entrada;
    int i, n;
    unsigned long long num_inv = 0;
    if (argc != 1){
        printf("Numero incorreto de parametros. Ex: .\\nome_arquivo_executavel\n");
        return 0;
    }
    scanf("%s", file_name);
    entrada = fopen(file_name, "r");
    if (entrada == NULL){
        printf("\nNao encontrei o arquivo! Informe o nome da instancia\n");
        exit(EXIT_FAILURE);
    }
    // lendo do arquivo da instância
    fscanf(entrada, "%d", &n);
    int *v = (int *)malloc(n * sizeof(int));
    int *aux = (int *)malloc(n * sizeof(int));
    for (i = 0; i < n; i++){
        fscanf(entrada, "%d", &v[i]);
        aux[i] = v[i];
    }
    num_inv = MergeSort(v, aux, 0, n - 1);
    // imprime(v, n);
    printf("%llu", num_inv);
    fclose(entrada);
    return 0;
}