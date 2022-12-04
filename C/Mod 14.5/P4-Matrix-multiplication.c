#include<stdio.h>
int main()
{
    int n, m, i, j, k;
    scanf("%d %d", &n, &m);
    int o_mtrx[n][m], t_mtrx[n][m], output[n][m];
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            scanf("%d", &o_mtrx[i][j]);
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            scanf("%d", &t_mtrx[i][j]);
        }
    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            output[i][j]=0;
            for(k=0; k<n; k++)
            {
                output[i][j]+=o_mtrx[i][k]*t_mtrx[k][j];
            }
        }
    }
    
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            printf("%d ", output[i][j]);
        }
        printf("\n");
    }
}