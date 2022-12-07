#include<stdio.h>
int main()
{
    int a, b, c;
    a=22, b=5, c=a&b;
    
    printf("%d\n", c);
    c=a|b;
    printf("%d\n", c);
    return 0;
}