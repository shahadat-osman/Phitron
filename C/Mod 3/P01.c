#include<stdio.h>
int main()
{
    int a, b;

    printf("Enter two numbers:\n");
    scanf("%d %d", &a, &b);

    if(a==b)
    {
        printf("Number1 and Number2 are equal.\n");
    }
    else
    {
        printf("Not equal.\n");
    }
    
    return 0;
}