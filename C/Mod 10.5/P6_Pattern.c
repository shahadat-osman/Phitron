#include<stdio.h>
int main()
{
    int i, j, n, k;
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        for(j=1; j<=n-i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
        for(j=1; j<=i+1; j++)
        {
            printf(" ");
        }
    }
}