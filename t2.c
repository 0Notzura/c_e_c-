#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct palavrasP
{
    char palavra[50];
    int valor;
};
int main(int argc, char ** argv)
{   
    int m,n,i=0,j=0;
    /* printf("Digite o numero de palavras e textos :"); */
    scanf("%d %d", &n,&m);
    printf("%d %d", n,m);
    char texto[m][2500];
    int vf[m];
    struct palavrasP p[n];    
    for ( i; i < n; i++)
    {
        /* printf("Digite a palavra :"); */
        scanf("%s %d",p[i].palavra,&p[i].valor);
    }
    getchar();
    for ( i = 0; i < m; i++)
    {
        
        fgets(texto[i],1000,stdin);
        /* printf("%s",texto[i]); */
    }
    for ( i = 0; i < m; i++){
        int conta=1;
        char * frase=texto[i];
        char * inicio=texto[i];
        int valor = 0; 
        for(j=0;j<n;j++){
            char * busca = p[j].palavra;
            /* printf("->>%s",frase); */
            do
            {
                frase = strstr(frase, busca);
                /* printf("frase"); */
                if(frase != NULL)
                {   
                    valor+=p[j].valor;
                    /* printf("Achou: %s\n", busca); */
                    conta--;
                }
                else{
                    break;
                }
                frase++;
            } while(strstr(frase, busca) != NULL);
            frase=inicio;
        }
        for(j=0; texto[i][j] != '\0'; j++){
            if(texto[i][j]==' ') {
            conta++;
            }

            }/* printf(" \n%d\n",conta); numero de palavras diferentes*/
        printf("%d\n", valor-(conta*10));//valor final
    }
    
    /* getchar();
    for ( i = 0; i < m; i++)
    {
        
        fgets(texto[i],1000,stdin);
        printf("%s",texto[i]);
    }
    for ( i = 0; i < m; i++){
        char * frase;
        char * busca = "todo\0";
        int repeticoes = 0;
        frase=texto[i];
        printf("%s",frase);
        do
        {
            frase = strstr(frase, busca);
            if(frase != NULL)
            {
                repeticoes++;
                printf("Achou: %s\n", frase);
            }
            frase++;
        } while(strstr(frase, busca) != NULL);
    printf("Repetições da Busca na Frase: %d\n", repeticoes);
    } */
    /* char texto[1000];
    char * frase;
    char * inicio_frase = texto;
    char * busca = "todo\0";
    int repeticoes = 0;
    fgets(texto,1000,stdin);
    printf("%s",texto);
    frase=texto;
    printf("%s",frase);
    do
    {
        frase = strstr(frase, busca);
        if(frase != NULL)
        {
            repeticoes++;
            printf("Achou: %s\n", frase);
        }
        frase++;
    } while(strstr(frase, busca) != NULL);
    frase = inicio_frase;
    printf("Resultados ===================================\n");
    printf("Frase: %s\n", frase);
    printf("Busca: %s\n", busca);
    printf("Repetições da Busca na Frase: %d\n", repeticoes); */
    return EXIT_SUCCESS;
}