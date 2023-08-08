#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define tam 3000 
char texto[tam];
FILE *arq;
char chave[]="abcdefghi";

void criptografar(){
    arq = fopen("pe.txt", "a");
    int j,c;
    int texto_crip[tam],i=0;
    while(texto[i]!=NULL){
        texto_crip[i]=texto[i];
        i++;
    }
    i=0;
    while(texto_crip[i]!=NULL)
    {
        for (j = 0; j < 9; j++)
        {   
            if(texto_crip[i]==NULL)
                break;
            texto_crip[i]=texto_crip[i]*((int)chave[j]);
            i++;
        }    
    }
    
    i=0;
    while(texto_crip[i]!=NULL){
        fprintf(arq,"%d ",texto_crip[i]);
        i++;
    }
    printf("%d",j);
}
void descriptografar(){
    int valor,i=0,ic=0;
    char destexto[3000];
    arq = fopen("p.txt", "r");
    while (!feof(arq))
    {
        fscanf(arq,"%d",&valor);
        
        valor=valor/((int)chave[ic]);
        destexto[i]=(char)valor;
        i++;
        ic++;
        if(ic>8){
            ic=0;
        }
    }
    printf("%s",destexto);
}
int main(int argc, char const *argv[])
{   int op;
    printf("1 ou 2: ");
    scanf("%d",&op);
    switch (op)
    {
    case 1:

        printf("digite o texo: ");
        setbuf(stdin,NULL);
        fgets(texto,3000,stdin);
        criptografar();
        break;
    case 2:
        descriptografar();
    default:
        break;
    }

    return 0;
}