#include<stdio.h>
int main()
{
    int n, i, k;
    scanf("%d", &n);
    int roll[n];
    for(i=1; i<=n; i++)
    {
        scanf("%d", &roll[i]);
    }
    scanf("%d", &k);
    for(i=k+1; i<=n; i++)
    {
        printf("%d ", roll[i]);
    }
    for(i=1; i<=k; i++)
    {
        printf("%d ", roll[i]);
    }
}