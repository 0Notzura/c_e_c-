/*#include <stdio.h>
#include<math.h>
float Acal(float n){
    float a;
    a=(3*n*n*sqrt(3))/2;
    return a;
}
float Pcal(float n){
    float p;
    p=6*n;
    return p;
}
int main(int argc, char const *argv[])
{
    float l;
    printf("Digite o lado do hexagono :");
    scanf("%f",&l);
    printf("A area vale %f.\nO perimetro vale %f.",Acal(l),Pcal(l));
    return 0;
#include <stdio.h>
int main() {
    double v,r;
    scanf("%lf",&v);
    r=(4/3.0)*3.14159*r*r*r;
    printf("%lf\n",r);
    return 0;
}
  }
  int main() {

double v,r;

scanf("%lf",&v);
r=(4/3.0)*3.14159*r*r*r;
printf("%lf\n",r);
return 0;

}

#include <stdio.h>

int main() {

    double v,r;

    scanf("%lf",&v);
    r=(4/3.0)*3.14159*v*v*v;
    printf("%.3lf\n",r);
    return 0;
}*/
#include <stdio.h>      /* printf, scanf, NULL */
#include <stdlib.h>     /* malloc, free, rand */

/*int main ()
{
  int i,n,c,c2,c3,c4,c5;
  int * buffer;

  printf ("How long do you want the string? ");
  scanf ("%d", &i);

  buffer = (int*) malloc (i+1);
  if (buffer==NULL) exit (1);

  for (n=0; n<i; n++)
    buffer[n]=rand()%100;
    c=buffer[3];
    c2=buffer;
    c4=buffer[1];
    c3=buffer[0];
    c5=buffer[2];
  printf ("Random string: %d \n",c,c3,c4,,c5,c2);
  free (buffer);

  return 0;
}*/
int main(int argc, char const *argv[])
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
  printf("%.3f // %.3f // %.3f // %.3f // %.3f //",area1.at,area1.ac,area1.atr,area1.aq,area1.ar);
  return 0;
}

