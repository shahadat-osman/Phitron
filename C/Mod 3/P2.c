#include<stdio.h>
int main()
{
    int x;
    printf("Input an integer:\n");
    scanf("%d", &x);
    if(x%2==0)
    {
        printf("%d is a even integer\n", x);
    }
    else
    {
        printf("%d is an odd integer\n", x);
    }
    return 0;
}