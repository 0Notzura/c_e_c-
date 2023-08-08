#include <stdio.h>
int multiplica(int m,int n){
    if(n<0){
    m=-m;
    n=-n;
    }
    if (n==0) return 0;
    else
    return m+multiplica(m,(n-1));
}
int main(){
    int m,n,r;
    scanf("%d%d",&m,&n);
    r=multiplica(m,n);
    printf("%d",r);
    return 0;

}