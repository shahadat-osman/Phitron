#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n, i, j;

    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = n - i; j > 0; j--)
            printf(" ");

        for (j = i; j > 0; j--)
            printf("%d", j);

        printf("\n");
    }

    return 0;
}