//Write a C program to take one positive integer N as input and print all even numbers from 1 to N.
#include<stdio.h>
int main()
{
    int n, i;

    scanf("%d", &n);
    
    for(i=1; i<=n; i++)
    {
        if(i%2==0)
        {
            printf("%d ", i);
        }
    }

    /* for(i=2; i<=n; i+=2)
    {
        printf("%d ", i);
    } */

    return 0;
}