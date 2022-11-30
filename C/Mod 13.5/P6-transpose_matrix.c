#include<stdio.h>
int main()
{
    int n, m, i, j;
    scanf("%d %d", &n, &m);
    int mtrx[n][m];
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            scanf("%d", &mtrx[i][j]);
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            printf("%d ", mtrx[j][i]);
        }
        printf("\n");
    }
}