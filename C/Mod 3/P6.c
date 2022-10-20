#include<stdio.h>
int main()
{
    int m;
    printf("Input a number:\n");
    scanf("%d", &m);
    if(m>0)
    {
        printf("The value of n = 1\n");
    }
    else if(m==0)
    {
        printf("The value of n = 0\n");
    }
    else
    {
        printf("The value of n = -1\n");
    }
    return 0;
}