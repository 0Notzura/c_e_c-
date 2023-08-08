#include <stdio.h>
int main(int argc, char const *argv[])
{
    int x= 10;
    int *p;
    p= &x;
    printf("%d//",x);
    printf("%d//",&x);
    printf("%d//",*p);
    printf("%d//",p);

    return 0;
}
