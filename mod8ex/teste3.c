#include <stdio.h>
#include<stdlib.h>
void rot1(int *V1,int *V2,int *T1,int *T2){
    int a,b,c;
    scanf("%d",&a);
    V1=(int *) realloc (V1,sizeof(int)*a);
    scanf("%d",&b);
    V2=(int *) realloc (V2,sizeof(int)*b);
    *T2=b;
    *T1=a;
    for (c=0;c<a;c++){
        scanf("%d",V1[c]);
        scanf("%d",V2[c]);
    }
    
}

int main(){
    int c,t1,t2,*v1=NULL,*v2=NULL;
    rot1(v1,v2,t1,t2);
    for (c=0;c<t1;c++){
        printf("%d",v1[c]);
    }
    return 0;
    
}