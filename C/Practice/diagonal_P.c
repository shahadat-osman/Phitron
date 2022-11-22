#include<stdio.h>
int main()
{
    int i, j, row, col;
    scanf("%d %d", &row, &col);
    int a[row][col];
    if(row!=col || row<2 && col<2)
    {
        printf("Not Diagonal\n");
    }
    else
    {
        for(i=0; i<row; i++)
        {
            for(j=0; j<col; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        int ans=1;
        for(i=0; i<row; i++)
        {
            for(j=0; j<col; j++)
            {
                if(i==j)
                {
                    continue;
                }
                if(a[i][j]!=0)
                {
                    ans=0;
                }
            }
        }
        if(ans==1)
        {
            printf("Diagonal\n");
        }
        else 
        {
            printf("Not Diagonal\n");
        }
    }
}