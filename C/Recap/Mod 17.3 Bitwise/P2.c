#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter a number:");
    scanf("%d", &a);
    b=a<<2;
    printf("%d\n", b);
    b=a>>2;
    printf("%d\n", b);
}