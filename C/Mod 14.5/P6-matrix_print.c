#include<stdio.h>
int main()
{
    int n, i, j;
    scanf("%d", &n);
    int ary[n][n];
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            ary[i][j]=0;
        }
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            scanf("%d", &ary[i][j]);
        }
    }
    for(i=1; i<=n; i++)
    {
        printf("row-%d and column-%d = ", i, i);
        for(j=1; j<=n; j++)
        {
            if(i==j)
                continue;
            else 
                printf("%d ", ary[i][j]);
        }
        for(j=1; j<=n; j++)
        {
            if(i==j)
                continue;
            else
                printf("%d ", ary[j][i]);
        }
        printf("\n");
    }
}