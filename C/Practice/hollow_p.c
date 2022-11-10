#include<stdio.h>
int main()
{
    int i,j,m;

    scanf("%d", &m);

    for(j=1; j<=m; j++)
    {
        printf("$");
    }
    printf("\n");
    for(i=1; i<=m-2; i++)
    {
        printf("$");
        for(j=1; j<=m-2; j++)
        {
            printf(" ");
        }
        printf("$");
        printf("\n");
    }
    for(j=1; j<=m; j++)
    {
        printf("$");
    }
    printf("\n");
}