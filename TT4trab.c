#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define M 1000
typedef struct 
{
    char palavra[50];
    int valor;
}palavrasP;

palavrasP tabelaHash[M];

void inicializarTabela(){
    int i;
    for(i = 0; i < M; i++)
        strcpy(tabelaHash[i].palavra,"NULL");
}

int gerarCodigoHash(int c){
    return c % M;
}

palavrasP lerpalavra(){
    palavrasP p;
    scanf("%s %d",p.palavra,&p.valor);
    return p;
}
int converte(char chave[50]){
    int i,valor=0;
    for (i=0;chave[i]!=NULL;i++)
    {
        valor+=(int) chave[i];      
    }
    return valor;
}
void inserir(){
    palavrasP p = lerpalavra();
    int i,valor=converte(p.palavra);
    int indice = gerarCodigoHash(valor);
    while(strcmp(tabelaHash[indice].palavra,"NULL")!=0)
        indice = gerarCodigoHash(indice + 1);
    tabelaHash[indice] = p;
}

palavrasP* buscar(char chave[50]){
    int indice = gerarCodigoHash(converte(chave));
    while(strcmp(tabelaHash[indice].palavra,"NULL")!=0){
        if(strcmp(tabelaHash[indice].palavra,chave)==0)
            return &tabelaHash[indice];
        else
            indice = gerarCodigoHash(indice + 1);
    }
    return NULL;
}

int main(int argc, char const *argv[])
{   int m,n,i=0,j=0,auxv=0;
    char *sub;
    scanf("%d %d", &n,&m);
    char texto[3000];
    int vf[m];
    palavrasP *p;
    inicializarTabela();
    for ( i; i < n; i++)
    {
        inserir();
    }
    i=0;
    getchar();
    i=0;

    for(i;i<m;i++){
        char *c;
        vf[i]=0;
        fgets(texto,3000,stdin);
        sub=strtok(texto," \0");
        while(sub!=NULL){
            p=buscar(sub);
            if(p==NULL){
                vf[i]-=10;
            }
            else{
                vf[i]+=p->valor;
            }
            sub=strtok(NULL," ,\n\0");
            auxv=0;
            j=0;
        }

    }  
    for ( i = 0; i < m; i++)
    {
        printf("%d\n",vf[i]); 
    } 
    return 0;
}