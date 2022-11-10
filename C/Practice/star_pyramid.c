#include<stdio.h>
int main()
{
    int i, j, m, k;
    scanf("%d", &m);

    for(i=0; i<m; i++)
    {
        for(k=0; k<m-i; k++)
        {
            printf(" ");
        }
        for(j=0; j<=i*2; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}