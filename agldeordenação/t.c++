#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include <iostream>
#define pai(I) ((I-1)/2)
#define fesq(I) ((I*2+1)
#define fdir(I) ((I*2+2)
using namespace std;

/* bool eheap(int *V,int Lastposition){
    bool b=1;
    if( V[pai(Lastposition)]<V[Lastposition]){
        cout<<"deuif \n";
        return false;
    }

    else{
        printf(" pai %d,filho %d\n",V[pai(Lastposition)],V[Lastposition]);
        Lastposition--;
        if(Lastposition>0)
            b=isHeap(V,Lastposition);
        printf("%d\n",b);
        if(!b)
            return b;

    }
    return true;
} */
bool isHeap(int *V,int Lastposition){

    for (int i = Lastposition; i >0; i--)
    {
        if( V[pai(i)]<V[i]){
            return false;
        }
    }
    return true;
    
}
int main(int argc, char const *argv[])
{   
    int V[5]={1,2,3,4,5};
    int V2[5]={5,6,5,4,3};
    cout<<isHeap(V2,4);
    return 0;
}
