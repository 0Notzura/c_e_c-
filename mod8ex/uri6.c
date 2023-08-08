#include<stdio.h>
#include<stdlib.h>
/*int main(int argc, char const *argv[])
{
  struct area{
    float a;
    float b;
    float c;
    float ac;
    float at;
    float ar;
    float atr;
    float aq;

  };
  struct area area1;
  printf("Digite o valor de a :");
  scanf("%f",&area1.a);
  printf("Digite o valor de b :");
  scanf("%f",&area1.b);
  printf("Digite o valor de c :");
  scanf("%f",&area1.c);
  area1.ac=3.14159*area1.c*area1.c;
  area1.at=(area1.a*area1.c)/2;
  area1.aq=area1.b*area1.b;
  area1.ar=area1.b*area1.a;
  area1.atr=(area1.a+area1.b)*area1.c/2;
  printf("TRIANGULO: %.3f\n",area1.at);
 printf("CIRCULO: %.3f\n",area1.ac);
 printf("TRAPEZIO: %.3f\n",area1.atr);
 printf("QUADRADO: %.3f\n",area1.aq);
 printf("RETANGULO: %.3f\n",area1.ar);
  return 0;
}*/
/*int main(int argc, char const *argv[])
{
    struct dist{
        double x1;
        double x2;
        double y1;
        double y2;
        double r;
    }d;
    scanf("%lf %lf %lf %lf", &d.x1, &d.y1, &d.x2, &d.y2);  
    d.r = sqrt(pow(d.x2-d.x1,2)+pow(d.y2-d.y1,2)); 
    printf("%.4lf\n", d.r); 
    return 0;
}*/
/*int main(int argc, char const *argv[])
{
    struct coord{
        float x;
        float y;
    }c;
    scanf("%f %f",&c.x,&c.y);
    if (c.x == 0.0 && c.x == 0.0)
    {
        printf("Origem\n");
    }
    else if (c.x > 0.0)
    {
        if (c.y > 0.0)
        {
            printf("Q1\n");
        }
        else printf("Q4\n");
    }
    else if (c.y > 0.0)
    {
        printf("Q2\n");
    }
    else printf("Q3\n");
    return 0;
}*/
/*int main(int argc, char const *argv[])


{
    struct coord{
        float x;
        float y;
    }c;
    c.y=1;
    c.x=1;
    do{
    scanf("%f %f",&c.x,&c.y);
    if (c.x == 0.0 || c.x == 0.0)
    {
        return 0;
    }
    else if (c.x > 0.0)
    {
        if (c.y > 0.0)
        {
            printf("primeiro\n");
        }
        else printf("quarto\n");
    }
    else if (c.y > 0.0)
    {
        printf("segundo\n");
    }
    else printf("terceiro\n");
    }while (c.y!=0 || c.x!=0);
    return 0;
}*/
/*int main(int argc, char const *argv[])
{
    struct area{
        double r;
    }a;

scanf("%lf",&a.r);

printf("VOLUME = %.3f\n",(4/3.0)*3.14159*a.r*a.r*a.r);




return 0;

}*/
/*int main() {
    struct cir{
        double raio;
        double area;
    }c;
    scanf("%lf",&c.raio);
    c.area=3.14159*c.raio*c.raio;
    printf("A=%.4lf\n",c.area);

    return 0;
}*/
/* int main() {
 struct tri{
     float a;
     float b;
     float c;
     float x;
 }t;
 scanf("%f %f %f", &t.a, &t.b, &t.c);
  if (t.a < t.b){ t.x = t.a; t.a = t.b; t.b = t.x; } 
  if (t.b < t.c){ t.x = t.b; t.b = t.c; t.c = t.x; } 
  if (t.a < t.b){ t.x = t.a; t.a = t.b; t.b = t.x; }
  if (t.a >= t.b + t.c) printf("NAO FORMA TRIANGULO\n");
     else
  if (t.a * t.a == t.b * t.b + t.c * t.c)
      printf("TRIANGULO RETANGULO\n");
     else 
  if (t.a * t.a > t.b * t.b + t.c * t.c)
 printf("TRIANGULO OBTUSANGULO\n");
  else 
  if (t.a * t.a < t.b * t.b + t.c * t.c) printf("TRIANGULO ACUTANGULO\n");
  if (t.a == t.b && t.b == t.c) 
     printf("TRIANGULO EQUILATERO\n");
      else
  if (t.a == t.b || t.b == t.c) printf("TRIANGULO ISOSCELES\n");

    return 0;
}*/
/*int main() {

struct con{
    float A;
    float B;
    float C;
}c;

scanf("%f %f %f",&c.A,&c.B,&c.C);

printf("TRIANGULO: %.3f\n",c.A*c.C/2);

printf("CIRCULO: %.3f\n",3.14159*c.C*c.C);

printf("TRAPEZIO: %.3f\n",(c.A+c.B)*c.C/2);

printf("QUADRADO: %.3f\n",c.B*c.B);

printf("RETANGULO: %.3f\n",c.A*c.B);

return 0;

}*/
/* int main(){
    struct con{
        double X;
        double Y;
    }c;
    scanf("%lf %lf", &c.X, &c.Y);
    if (c.X == 0.0 && c.Y == 0.0)
    {
        printf("Origem\n");
    }
    else if (c.X == 0.0 && c.Y != 0.0)
    {
        printf("Eixo Y\n");
    }
    else if (c.Y == 0.0 && c.X != 0.0)
    {
        printf("Eixo X\n");
    }
    else if (c.X > 0.0)
    {
        if (c.Y > 0.0)
        {
            printf("Q1\n");
        }
        else printf("Q4\n");
    }
    else if (c.Y > 0.0)
    {
        printf("Q2\n");
    }
    else printf("Q3\n");
    return 0;
}*/
/*alt do morro
int main(int argc, char const *argv[])
{
    float *v,*r;
    v=(float *) malloc(3*sizeof(float));
    r=(float *) malloc(sizeof(float));
    printf("Digite o primeiro angulo :");
    scanf("%f",&v[0]);
    printf("Digite o segundo angulo :");
    scanf("%f",&v[1]);
    printf("Digite a distancia percorrida :");
    scanf("%f",&v[2]);
    v[0]=tan((v[0]/180)*3.14159);
    v[1]=tan((v[1]/180)*3.14159);
    r[0]=-(v[1]*v[1]*v[2])/(v[0]-v[1])-v[1]*v[2];
    printf("A altura do morro e %.3f",r[0]);
    return 0;
}*
/*int main(){
    unsigned int vet[10];
    int i,c;
    for(i = 0; i < 10; i++)  
    scanf("%d", &vet[i]);
   return 0;
}*/
/*int main(){
    unsigned int vet[10];
    int i=0;
    while(i<10 ){
        scanf("%d",&vet[i]);
        i++;
    }
    i=9;
    while(i>=0 ){
        printf("%d ",vet[i]);
        i=i-1;
    }
    printf("\n ");
   return 0;
}*/
/*int main(int argc, char const *argv[])
{
    int vet[5]={2,1,3,4,5};
    int c=0;
    int c2=vet[0];
    while(c<4){
        if (c2>vet[c+1])
            c2=vet[c+1];
    c=c+1;
    }
    //printf("kmcdskmcdskmc dv");
    printf("%d",c2);

    return 0;
}*/
/*int main(int argc, char const *argv[])
{   
    int c=0,tamanho;
    double *vet,c2,media;
    scanf("%d",&tamanho);
    vet=(int *)(malloc (tamanho * sizeof(double)));
    vet[tamanho]=3;
    while(c<tamanho){
        scanf("%lf",&vet[c]);
        c2=c2+vet[c];
        c=c+1;
    }media=c2/c;
    
    printf("%lf",media);
    free(vet);
    return 0;
    
}*/
/*int main(){
    double v[4],vet[4];
    int i=0,c=0;
    while(i<4 ){
        scanf("%lf",&vet[i]);
        v[i]=vet[i];
        i++;
    }
    i=3;
    while(i>=0 ){
       vet[c]=v[i];
       printf("%lf",vet[c]);
       c=c+1;
       i=i-1;
    }
    printf("\n ");
   return 0;
}*/
/*void main()
{
    int vet[5];
    int c=0,c3=0;
    while(c<5){
        scanf("%d",&vet[c]);
        c++;
        }c=0;
        int c2=vet[0];

    while(c<5){
        if (c2>vet[c+1]){
            c2=vet[c+1];
            c3=c+1;
        }
        c=c+1;
    };
    if (c3!=0){
    vet[c3]=vet[0];
    vet[0]=c2;
    }
    c=0;
    while(c<5){
        printf("%d",vet[c]);
        c++;
    }
}*/
/*int main()
{   int i=0,i2=0,c2=0;
    int *vet,c,v;
    scanf("%d",&c);
    scanf("%d",&v);
    vet=(int *) malloc(c*sizeof(int));
    while (i<c){
        printf("digite :");
        scanf("%d",&vet[i]);
        i++;
    }i=0;
    vet[4]=vet[3];
    while (i<c-c2){
        i2=i;
        //printf("%d %d %d ",i2,vet[i2],v);
        if (vet[i2]==v){
           // printf("foi %d \n",vet[3]);
            while(i2<c){
                vet[i2]=vet[i2+1];
                i2++;   
            }
            //printf("foi %d \n",vet[3]);
            c2++;
            i=i-1;
        }
        else{
        printf("%d",vet[i]);
        }
        i++;
    }
    return 0;

}*/
/*int main()
{   int i=0,i2=0,c2=0;
    int c, v;
    scanf("%d",&c);
    scanf("%d",&v);
    int vet[c];
    while (i<c){
        printf("digite :");
        scanf("%d",&vet[i]);
        i++;
    }i=0;
    vet[5]=vet[4];
    while (i<c-c2){
        i2=i;
        if (vet[i2]==v){
            while(i2<c){
                vet[i2]=vet[i2+1];
                i2++;   
            }
            c2++;
            i=i-1;
        }
        else{
        printf("%d",vet[i]);
        }
        i++;
    }
    return 0;
}*/
/*void desloca_menor()
{   int tamanho;
    scanf("%d",&tamanho);
    int vet[tamanho];
    int c=0,c3=0;
    while(c<tamanho){
        scanf("%d",&vet[c]);
        c++;
        }c=1;
        int c2=vet[0];
    while(c<tamanho){
        if (c2>vet[c]){
            c2=vet[c];
            c3=c;
        }
        c=c+1;
    }
    if (c3==0)
    vet[0]=c2;
    else{
    vet[c3]=vet[0];
    vet[0]=c2;
    }
    c=0;
    while(c<tamanho){
        printf("%d",vet[c]);
        c++;
    }
    return 0;
}*/
/*void rot1(int *v1,int *v2,int t1,int t2){
    int c,a,b;
    v1=(int *) malloc(t1 *sizeof(int));
    v2=(int *) malloc(t2 *sizeof(int));
    for(c=0;c<t1;c++){
        scanf("%d",&v1[c]);
        
    }c=0;
    for(c=0;c<t2;c++){
        scanf("%d",&v2[c]);
    }
}
void rot2(int *v1,int *v2,int *v3, int t1, int t2){
    int t3,c,c2=0,aux;
    t3=t1+t2;
    v3=(int *) malloc(sizeof(int)*t3);
    while(c<t1){
        v3[c]=v1[c];
        c++;
    }
     while(c<t3){
        v3[c]=v2[c2];
        c++;
        c2++;
    }c=0;
    while (c<t3){
        c2=c+1;
        while(c2<t3){
            if (v3[c]>v3[c2]){
                aux=v3[c];
                v3[c]=v3[c2];
                v3[c2]=aux;
             }
        }
    }
}
int main(){
    int *v1,*v2,*v3,t1,t2,c;
    scanf("%d",&t1);
    scanf("%d",&t2);
    rot1(v1,v2,t1,t2);
    printf("%d %d\n",t1,t2);
        printf("%d\n",v1[0]);
        printf("%d\n",v1[1]);
        printf("%d\n",v1[2]);
}*/
#include <stdio.h>
#include <stdlib.h>
/*int* realoca(int* v, int* t)
{
    int count,
    add;
 
    printf("Deseja adicionar quantos numeros: ");
    scanf("%d", &add);
 
    v = (int *) realloc(v, (*t + add)*sizeof(int) );
    if(v)
    {
  
        for(count=0 ; count < add ; count++)
        {
            printf("Numero [%d]: ", count+1);
            scanf("%d", &v[*t] + count]);
        }
 
    *t += add;
 }
    else
    {
        printf("Espaço em memória insuficiente\n");
        free(v);
        exit(1);
    }
    return v;
}
int* uniao(int v1[],int v2[],int *v3,int t1,int t2){
    int c,c2=0,aux=0,*v,c3=0;
        v=(int *) malloc((t1+t2)*sizeof(int));
    if (v){
        for (c=0;c<(t1+t2);c++){
            if (c<t1){
                v[c]=v1[c];
            }
            else{
                v[c]=v2[c2];
                c2++;
            }
        }c=0;c2=0;
        for (c=0;c<(10);c++){
            for (c2=(c+1);c2<(10);c2++){ 
                if (v[c]==v[c2]){
                    v[c]=0;
                    c3++;
                    break;                   
                }
            }   
        }c=0;c2=0;
        for (c=0;c<(t1+t2);c++){
            for (c2=c;c2<(t1+t2);c2++){
                if (v[c]>v[c2]){
                    aux=v[c];
                    v[c]=v[c2];
                    v[c2]=aux;
                }   
            }
        }
        v3=(int *) realloc(v3,(t1+t2)*sizeof(int));
        for (c=0;c<(t1+t2);c++){
            v3[c]=v[c];
        }
        
    }
    else
    {
        printf("Espaço em memória insuficiente\n");
        free(v3);
        exit(1);
    }
    return v3;
}

int main()
{
    int c,c2=0,t1=0,*v1=NULL,t2=0,*v2=NULL,*v3=NULL;
 
    v1=realoca(v1, &t1);
    v2=realoca(v2, &t2);
    v3=uniao(v1,v2,v3,t1,t2);
    for (c=0;c<(t1+t2);c++){
        printf("%d",v3[c]);
    }
    
    free(v1);
    free(v2);
    free(v3);
 
 return 0;
}
typedef struct{
        int n;//numerador
        int d;//denominador
    }tRacional;
void red(tRacional **f){
    int m,dm=1,dM,c;
    if ((**f).n<0){//parte para pasar os negativos para positivos
        (**f).n=-(**f).n;
        c=0;
    }
    if ((**f).d<0){
        (**f).d=-(**f).d;
        c=1;
    }
    m=(**f).n;//inicio
    if ((**f).d<(**f).n){//conferir quem é maior
        m=(**f).d;
    }
    while(dm<=m){//parte da redução da fração
        if ((**f).n%dm==0 && (**f).d%dm==0){
            dM=dm;
        }dm++;
    }
    if (c==0){//parte para voltar pros valores originais
        (**f).n=-(**f).n;
        c=0;
    }
    if (c==1){
        (**f).d=-(**f).d;
        c=1;
    }
    (**f).n=(**f).n/dM;
    (**f).d=(**f).d/dM;
}*/
/*void ler(tRacional *n){//leitura do numerador e denominador,redução da fração e escrita da fração reduzida.
    //int dm=1,dM,m;
    printf("Digiete o numerador :");//leitura dos dados
    scanf("%d",&(*n).n);
    printf("Digite o denominador :");
    scanf("%d",&(*n).d);
    red(&n);//sub-rotina de redução
    printf("%d/%d\n",(*n).n,(*n).d);//escrita da fração resultante
}
void somar(tRacional *s,tRacional n1,tRacional n2){//soma de fração
    float d,a,b;
    a=n1.d;b=n2.d;
    d=a/b;
    if (d==1 ){//caso os denominadores sejam iguais
       // printf("0");
        (*s).n=n1.n+n2.n;//soma do numerador
        (*s).d=n2.d;//soma do denominador
    }
    else if (d>1){
        if(n1.d%n2.d==0){//caso n1.d seja multiplo de n2.d
            //printf("1");
            (*s).n=n1.n+(n2.n*(n1.d/n2.d));//soma do numerador
            (*s).d=n1.d;//soma do denominado
        }
        else{
            //printf("(2)");//caso n1.d seja apenas maior que n2.d
            (*s).n=(n1.n*n2.d)+(n2.n*n1.d);//soma do numerador
            (*s).d=n1.d*(n2.d);
        }
    }
    else if(d<1){
       if(n2.d%n1.d==0){//caso n2.d seja multiplo de n1.d
           // printf("3");
            (*s).n=n2.n+(n1.n*(n2.d/n1.d));//soma do numerador
            (*s).d=n2.d;//soma do denominador
        } 
         else{//caso n2.d seja apenas maior q n1.d
            //printf("4");
            (*s).n=(n1.n*n2.d)+(n2.n*n1.d);//soma do numerador
            (*s).d=n1.d*(n2.d);//soma do denominador 
        }
    }
    red(&s);//sub-rotina de redução

}
void subr(tRacional *s,tRacional n1,tRacional n2){//subtração de fração
    float d,a,b;
    a=n1.d;b=n2.d;
    d=a/b;
    if (d==1 ){//caso os dois denominadores sejam iguais
        printf("0");
    (*s).n=n1.n-n2.n;//subtração do numerador
    (*s).d=n2.d;//subtração do denominador
    }
    else if (d>1){
        if(n1.d%n2.d==0){//caso n1.d seja multiplo de n2.d
            printf("1");
            (*s).n=n1.n-(n2.n*(n1.d/n2.d));//subtração do numerador
            (*s).d=n1.d;//subtração do denominador
        }
        else{
            printf("(2)");//caso n1.d seja apenas maior que n2.d
            (*s).n=(n1.n*n2.d)-(n2.n*n1.d);//subtração do numerador
            (*s).d=n1.d*(n2.d);//subtração do denominador
        }
    }
    else if(d<1){
       if(n2.d%n1.d==0){//caso n2.d seja multiplo de n1.d
            printf("3");
            (*s).n=(n1.n*(n2.d/n1.d)-n2.n);//subtração do numerador
            (*s).d=n2.d;//subtração do denominador
        } 
         else{//caso n2.d seja apenas maior que n1.d
            (*s).n=(n1.n*n2.d)-(n2.n*n1.d);//subtração do numerador
            (*s).d=n1.d*(n2.d);//subtração do denominador
        }
    }
    red(&s);//sub-rotina de redução
}
void multi(tRacional *mult,tRacional n1,tRacional n2){
    (*mult).n=n1.n*n2.n;//multiplicação do numerador
    (*mult).d=n1.d*n2.d;//multiplicação do denominador
    red(&mult);//redução da fração
}
void div(tRacional *d,tRacional n,tRacional n2){
    (*d).n=n.n*n2.d;//multiplicação do numerador pelo denominador
    (*d).d=n.d*n2.n;//multiplicação do denominador pelo numerador
    red(&d);//redução da fração
}
int main(int argc, char const *argv[]){
    tRacional num,num2,soma,sub,multip,divi;
    ler(&num);
    ler(&num2);
    somar(&soma,num,num2);
    subr(&sub,num,num2);
    multi(&multip,num,num2);
    div(&divi,num,num2);
    printf(" %d/%d",sub.n,sub.d);
    return 0;
}
*/
 int myfunc(int v[], int n){
    int m;
     if (n == 1) 
          return  v[0];
     else{ 
        int m = myfunc(v , n-1);

             if ( m > v [n-1])
                    return m;

             return v[n-1];
     }
}
int main(){
    int v[5]={0,1,2,10,3,9},c;
    int n=5;
    c=myfunc(v,n);
    printf("%d",c);
    return 0;
}