#include<stdio.h>
int main()
{
    int a=5, b=13;
    int swapN;
    swapN=a;
    a=b;
    b=swapN;

    printf("%d and %d", a, b);

    return 0;
}