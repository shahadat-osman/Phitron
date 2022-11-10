#include<stdio.h>
int main()
{
    int i,j,m;

    scanf("%d", &m);
    printf("$$\n");

    for(i=1; i<=m-3; i++)
    {
        printf("$");
        for(j=1; j<=i; j++)
        {
            printf(" ");
        }
        printf("$\n");
    }
    for(j=1; j<=m; j++)
    {
        printf("$");
    }
    printf("\n");
}