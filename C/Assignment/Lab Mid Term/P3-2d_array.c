#include<stdio.h>
int main()
{
    int n, m, i, j;
    scanf("%d %d", &n, &m);

    int ary[n+1][m+1];
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            scanf("%d", &ary[i][j]);
            
            if(i==j && i==ary[i][j])
                ary[i][j]+=3;
            else if(ary[i][j]==i)
                ary[i][j]+=2;
            else if(ary[i][j]==j)
                ary[i][j]+=1;
        }
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
            printf("%d ", ary[i][j]);

        printf("\n");
    }
}