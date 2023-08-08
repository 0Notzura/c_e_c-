#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct palavrasP
{
    char palavra[30];
    int valor;
};
int main(int argc, char const *argv[])
{   int m,n,i=0,j=0,tv=0;
    char *sub,sub2[50];
    
    printf("Digite o numero de palavras e textos :");
    scanf("%d %d", &n,&m);
    printf("%d %d", n,m);
    char texto[2500];
    int vf[m];
    struct palavrasP p[n];
    /* for ( i; i < n; i++)
    {
        printf("Digite a palavra");
        scanf("%s",&p2[i].palavra);
        printf("Digite o valor da palavra");
        scanf("%s",&p2[i].valor);
    } */
    
    for ( i; i < n; i++)
    {
        printf("Digite a palavra :");
        scanf("%s %d",p[i].palavra,&p[i].valor);
        /* printf("%d",p[i].valor); */
    }
    i=0;
    for ( i; i < n; i++)
    {
        printf("palavra valor i:");
        printf(" %s %d %d\n",p[i].palavra,p[i].valor,i);
        /* printf("%d",p[i].valor); */
    }
    getchar();
    i=0;

    for(i;i<m;i++){
        vf[i]=0;
        printf("Digite o texto :");
        fgets(texto,2500,stdin);
        sub=strtok(texto," \0");
        while(sub!=NULL){
            for(j=0;j<n;j++){
                if(strcmp(sub,p[j].palavra)==0){
                    vf[i]+=p[j].valor;
                    j=n;
                     tv=1;
                }
            }
            if(! tv){
                vf[i]-=10;
            }
            sub=strtok(NULL," ,\n\0");
             tv=0;
            j=0;
        }
    }  
    for ( i = 0; i < m; i++)
    {
        printf("->%d",vf[i]); 
    }
     
    
    return 0;
}

