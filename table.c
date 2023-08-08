#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// constante repesenta o tamanho da tabela
#define M 19

// estrutura Pessoa com nome e uma matrícula
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
    printf("->>%d",c);
    return c % M;
}

// função para ler e retornar uma pessoa
palavrasP lerPessoa(){
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
    palavrasP p = lerPessoa();
    int i,valor=converte(p.palavra);
    printf("-))%d\n",valor);
    int indice = gerarCodigoHash(valor);
    while(strcmp(tabelaHash[indice].palavra,"NULL")!=0)
        indice = gerarCodigoHash(indice + 1);
    tabelaHash[indice] = p;
}

palavrasP* buscar(char chave[50]){
    printf("==>%d\n",converte(chave)); 
    int indice = gerarCodigoHash(converte(chave));
    /* printf("->%d\n",indice); */
    while(strcmp(tabelaHash[indice].palavra,"NULL")!=0){
        if(strcmp(tabelaHash[indice].palavra,chave)==0)
            return &tabelaHash[indice];
        else
            indice = gerarCodigoHash(indice + 1);
            printf("()()()\n");
    }
    return NULL;
}
void imprimir(){
    int i;
    printf("\n------------------------TABELA---------------------------\n");
    for(i = 0; i < M; i++){
        if(strcmp(tabelaHash[i].palavra,"NULL")!=0)
            printf("%2d = %3d \t %s", i, tabelaHash[i].valor, tabelaHash[i].palavra);
        else
            printf("%2d =\n", i);
    }
    printf("\n----------------------------------------------------------\n");
}

int main() {
    int op, chave;
    palavrasP *p;

    inicializarTabela();
    char str[50];
    do{
        printf("1 - Inserir\n2 - Buscar\n3 - Imprimir\n0 - Sair\n");
        scanf("%d", &op);

        switch(op){
        case 0:
            printf("Saindo...\n");
            break;
        case 1:
            inserir();
            break;
        case 2:
            printf("Digite a matricula a ser buscada:");
            scanf("%s", str);
            p = buscar(str);

            if(p)
                printf("\n\tMatricula: %d \tNome: %s\n", p->valor, p->palavra);
            else
                printf("\nMatricula nao encontrada!\n");
            break;
        case 3:
            imprimir();
            break;
        case 4:
            scanf("%s",str);
            printf("%d",gerarCodigoHash(str));
            break;
        default:
            printf("Opcao invalida!\n");
        }

    }while(op != 0);

    return 0;
}
