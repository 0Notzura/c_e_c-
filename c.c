#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int q,j,i,c,d;
    q=9;
    for(j=1;j<q;j++){
        for(i=1;i<q;i++){
            c=(i*j)%q;
            if(c==4){
                printf("%d %d %d \n",c,i,j);
            }
        }   
    }
    return 0;
}
