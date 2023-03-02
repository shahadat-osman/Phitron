#include <stdio.h>
void operation(int r1, int c1, int r2, int c2);

int main()
{
    int r1, c1, r2, c2;
    scanf("%d %d", &r1, &c1);
    scanf("%d %d", &r2, &c2);
    
    if(r1!=c2)
        return 0;

    operation(r1, c1, r2, c2);

    return 0;
}
void operation(int r1, int c1, int r2, int c2)
{
    int i, j, k, o_mtrx[r1][c1], t_mtrx[r2][c2], output[r1][c2];

    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            scanf("%d", &o_mtrx[i][j]);
        }
    }
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            scanf("%d", &t_mtrx[i][j]);
        }
    }

    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            output[i][j]=0;
            for(k=0; k<c1; k++)
            {
                output[i][j]+=o_mtrx[i][k]*t_mtrx[k][j];
            }
        }
    }
    
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("%d ", output[i][j]);
        }
        printf("\n");
    }

}