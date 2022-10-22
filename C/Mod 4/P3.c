#include<stdio.h>
int main()
{
    int n, i, sum=0;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        printf("%d ", i);
        sum=sum+i;
    }
    printf("\nThe sum of Natural Number upto %d terms: %d\n", n,sum);

    return 0;
}