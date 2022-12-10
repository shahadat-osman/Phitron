#include<stdio.h>
int main()
{
    int i, j, n;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        if(i==1)
        {
            for(j=i; j<=n; j++)
            {
                printf("%d", j);
            }
        }
        else if(i==n)
        {
            for(j=1; j<=n; j++)
            {
                printf("%d", n);
            }
        }
        else
        {
            printf("%d", i);
            for(j=1; j<n-1; j++)
            {
                printf(" ");
            }
            printf("%d", n);
        }
        printf("\n");
    }
}