#include<stdio.h>
int main()
{
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);

    if(a>b && a>c)
        printf("A is bigger.\n");
    else if(b>a && b>c)
        printf("B is bigger.\n");
    else if(c>a && c>b)
        printf("C is bigger.\n");
    else if(a==b && b>c)
        printf("A & B both are bigger.\n");
    else if(b==c && b>a)
        printf("B & C both are bigger.\n");
    else if(a==c && a>b)
        printf("A & C both are bigger.\n");
    else
        printf("They are equal.\n");
    
    return 0;
}   