#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define M 200

typedef struct 
{
    char palavra[50];
    int valor;
}palavrasP;

// nossa tabela hash do tipo Pessoa
palavrasP tabelaHash[M];

// inicializa nossa tabela com o valor de codigo -1
void inicializarTabela(){
    int i;
    for(i = 0; i < M; i++)
        strcpy(tabelaHash[i].palavra,"NULL");
}

// função de espalhamento (resto da divisão da chave por M)
int gerarCodigoHash(int c){
    /* printf("->>%d",c); */
    return c % M;
}

// função para ler e retornar uma pessoa
palavrasP lerpalavra(){
    palavrasP p;
    printf("Digite a palavra :");
    scanf("%s %d",p.palavra,&p.valor);
    /* printf("%s %d",p.palavra,p.valor); */
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
// inserir uma pessoa na tabela
void inserir(){
    palavrasP p = lerpalavra();
    int i,valor=converte(p.palavra);
    /* printf("-))%d\n",valor); */
    int indice = gerarCodigoHash(valor);
    while(strcmp(tabelaHash[indice].palavra,"NULL")!=0)
        indice = gerarCodigoHash(indice + 1);
    tabelaHash[indice] = p;
}

palavrasP* buscar(char chave[50]){
    /* printf("==>%d\n",converte(chave)); */ 
    int indice = gerarCodigoHash(converte(chave));
    /* printf("->%d\n",indice); */
    while(strcmp(tabelaHash[indice].palavra,"NULL")!=0){
        if(strcmp(tabelaHash[indice].palavra,chave)==0)
            return &tabelaHash[indice];
        else
            indice = gerarCodigoHash(indice + 1);
           /*  printf("()()()\n"); */
    }
    return NULL;
}

int main(int argc, char const *argv[])
{   int m,n,i=0,j=0,auxv=0;
    char *sub,sub2[50];
    
    printf("Digite o numero de palavras e textos :");
    scanf("%d %d", &n,&m);
    printf("%d %d", n,m);
    char texto[1000];
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
        vf[i]=0;
        printf("Digite o texto :");
        fgets(texto,1000,stdin);
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
        printf("->%d",vf[i]); 
    } 
    return 0;
}