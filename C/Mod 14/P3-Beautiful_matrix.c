#include<stdio.h>
int main()
{
    int i, j, n=5, x, y, row_c, colm_c, ary[n][n], ans;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            scanf("%d", &ary[i][j]);
            if(ary[i][j]==1)
                x=i, y=j;
        }
    }
    if(x>3)
        row_c=x-3;
    else 
        row_c=3-x;
        
    if(y>3)
        colm_c=y-3;
    else 
        colm_c=3-y;

    ans=row_c+colm_c;
    printf("%d\n", ans);
}