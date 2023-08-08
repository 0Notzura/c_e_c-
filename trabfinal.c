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
    scanf("%d %d", &n,&m);
    printf("%d %d", n,m);
    char texto[2500];
    int vf[m];
    struct palavrasP p[n];    
    for ( i; i < n; i++)
    {
        scanf("%s %d",p[i].palavra,&p[i].valor);
    }
    getchar();
    /* for ( i = 0; i < m; i++)
    {
        
        fgets(texto[i],2500,stdin);
    } */
    for ( i = 0; i < m; i++){
        fgets(texto,2500,stdin);
        int conta=1;
        char * frase=texto;
        char * inicio=texto;
        int valor = 0; 
        for(j=0;j<n;j++){
            char * busca = p[j].palavra;
            do
            {
                frase = strstr(frase, busca);
                if(frase != NULL)
                {   
                    valor+=p[j].valor;
                    conta--;
                }
                else{
                    break;
                }
                frase++;
            } while(strstr(frase, busca) != NULL);
            frase=inicio;
        }
        for(j=0; texto[j] != '\0'; j++){
            if(texto[j]==' ') {
            conta++;
            }

            }
        vf[i]=valor-(conta*10);//valor final
    }
    for ( i = 0; i < m; i++)
    {
        printf("%d\n",vf[i]);
    }
    

    return EXIT_SUCCESS;
}