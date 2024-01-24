#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n, i, j, s=1;

    scanf("%d", &n);

    int star=10+n;
    int space=star/2;
    while(s<=star)
    {
        for(j=1; j<=space; j++)
            printf(" ");
        
        for(j=1; j<=s; j++)
            printf("*");
        
        printf("\n");
        space--;
        s+=2;
    }

    for(i=1; i<=5; i++)
    {
        for(j=1; j<=5; j++)
            printf(" ");
        
        for(j=1; j<=n; j++)
            printf("*");
        
        printf("\n");

    }
    return 0;
}
