#include<stdio.h>
char rom(int x){
    int d,u;
    d=x/10;
    u=x%10;
    switch(d){
        case 1 :
        printf("X");
        break;
        case 2 :
        printf("XX");
        break;
        case 3 :
        printf("XXX");
        break;
        case 4 :
        printf("XL");
        break;
        case 5 :
        printf("L");
        break;
    }
    switch(u){
        case 1 :
        printf("I");
        break;
        case 2 :
        printf("II");
        break;
        case 3 :
        printf("III");
        break;
        case 4 :
        printf("IV");
        break;
        case 5 :
        printf("V");
        break;
        case 6 :
        printf("VI");
        break;
        case 7 :
        printf("VII");
        break;
        case 8 :
        printf("VII");
        break;
        case 9 :
        printf("IX");
        break;
        
    }


}

int main(int argc, char const *argv[])
{
    int x;
    
    printf("Digite um numero :");
    scanf("%d",&x);
    rom(x);
    return 0;
}
