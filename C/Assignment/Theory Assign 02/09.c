#include<stdio.h>
int main()
{
    int n=3, i, j;
    int ary[n][n];
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
            scanf("%d", &ary[i][j]);
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
            printf("%d ", ary[j][i]);

        printf("\n");
    }
}