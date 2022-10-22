#include<stdio.h>
int main()
{
    int n, i;

    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        printf("Number is : %d and square of the %d is : %d\n", i, i, i*i);
    }
    return 0;
}