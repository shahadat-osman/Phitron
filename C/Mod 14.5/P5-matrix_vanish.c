#include<stdio.h>
int main()
{
    int r, i, n=8, m=8, j;
    int ary[n][m];
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            ary[i][j]=0;
        }
    }
    scanf("%d", &r);
    while(r--)
    {
        int x, y;
        scanf("%d %d", &x, &y);
        ary[x][y]=1;
    }
    for(i=0; i<n; i++)
    {
        int count=0;
        for(j=0; j<m; j++)
        {
            if(ary[i][j]==1)
                count++;
        }
        if(count>1)
        {
            for(j=0; j<m; j++)
            {
                ary[i][j]=0;
            }
        }
        count=0;
        for(j=0; j<n; j++)
        {
            if(ary[j][i]==1)
                count++;
        }
        if(count>1)
        {
            for(j=0; j<n; j++)
            {
                ary[j][i]=0;
            }
        }
    }
    int rooks=0;
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            if(ary[i][j]==1)
                rooks++;
        }
    }
    printf("Safe Rooks- %d\n", rooks);

    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            if(ary[i][j]!=0)
                printf("%d %d\n", i, j);
        }
    }
    printf("---------------\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            printf("%d ", ary[i][j]);
        }
        printf("\n");
    }
}