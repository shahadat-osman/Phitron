#include<stdio.h>
int main()
{
    int i, j, row, col, min;
    scanf("%d %d", &row, &col);
    int a[row][col];
    if(row!=col || row<2 && col<2)
    {
        printf("Not Scalar\n");
    }
    else
    {
        min=row-1;
        for(i=0; i<row; i++)
        {
            for(j=0; j<col; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        int ans=1, x=a[0][0];
        for(i=0; i<row; i++)
        {
            for(j=0; j<col; j++)
            {
                if(i+j==min)
                {
                    if(a[i][j]!=x)
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
            printf("Scalar\n");
        }
        else 
        {
            printf("Not Scalar\n");
        }
    }
}