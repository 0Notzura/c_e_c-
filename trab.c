#include <stdio.h>
#include <stdlib.h>
#define MAX 100

 void troca(int *vet, int *vet2)
{
	int aux = *vet;
	*vet = *vet2;
	*vet2 = aux;
}
int separa(int v[], int p, int r,int *valor) {
  int i, j, c = v[r]; // c é o pivô
  i = p;
  for (j = p; j < r; j++)
    if (v[j] <= c) {
       if(i-j>=0){
        /* printf("(%d-%d-%d-%d)\n",i,j,v[i],v[j]); */
        *valor=*valor+(i-j);
      }
      else{
        /* printf("(%d-%d)",i,j); */
        *valor=*valor+(j-i);
      } 
      troca(&v[i], &v[j]);
      i++;
    }
  if(i-j>=0){
    /* printf("(%d-%d)(%d--%d)\n",i,j,v[i],v[j]); */
    *valor=*valor+(i-j);
  }
  else{
    /* printf("(%d-%d)(%d--%d)\n",i,j,v[i],v[j]); */
    *valor=*valor+(j-i);
  }
  troca(&v[i], &v[r]);
  return i;
}
void quickSort(int v[], int p, int r,int *valor) {
  int i;
  if (p < r) { 
    i = separa(v, p, r,valor);
    quickSort(v, p, i - 1,valor);
    quickSort(v, i + 1, r,valor);
  }
}
/* void insertion_sort(int *a,int n,int *valor){
 int i, j, tmp;
  
  for(i = 1; i < n; i++){
    tmp = a[i];
    for(j = i-1; j >= 0 && tmp < a[j]; j--){
      a[j+1] = a[j];
      *valor=*valor+1;
    }
    //printf("%d\n",valor);
    a[j+1] = tmp;
  }
} */
void imprime(int v[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", v[i]);
    printf("\n");
}
int main(int argc, char *argv[])
{
    char file_name[MAX];
    FILE *entrada;
    int i, n,valor=0;
    unsigned long long num_inv = 0;
    if (argc != 1)
    {
        printf("Numero incorreto de parametros. Ex: .\\nome_arquivo_executavel\n");
        return 0;
    }
    scanf("%s", file_name);
    entrada = fopen(file_name, "r");
    if (entrada == NULL)
    {
        printf("\nNao encontrei o arquivo! Informe o nome da instancia\n");
        exit(EXIT_FAILURE); }
    // lendo do arquivo da instância
    fscanf(entrada, "%d", &n);
    int *v = (int *)malloc(n * sizeof(int));
    for (i = 0; i < n; i++)
        fscanf(entrada, "%d", &v[i]);
    quickSort(v,0,n,&valor);
    //imprime(v, n);
    
    printf("\n%d\n",valor);
    fclose(entrada);
    return 0;
}
