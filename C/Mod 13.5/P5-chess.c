#include<stdio.h>
int main()
{
    int i, j, r, x, y, row=3, colm=3, mtrx[row][colm], select;

    for(i=1; i<=row; i++)
    {
        for(j=1; j<=colm; j++)
        {
            mtrx[i][j]=0;
        }
    }
    scanf("%d", &r);
    for(i=1; i<=r; i++)
    {
        scanf("%d %d", &x, &y);
        mtrx[x][y]=1;
    }
    printf("Total empty cells - %d\n", 9-r);

    for(i=1; i<=row; i++)
    {
        for(j=1; j<=colm; j++)
        {
            if(mtrx[i][j]==0)
                printf(" %d %d\n", i, j);
        }
    }
}