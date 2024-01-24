#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n, i, j;

    scanf("%d", &n);

    int space = n - 1, hash = 1;

    for (i = 1; i <= (2 * n) - 1; i++)
    {
        for (j = 1; j <= space; j++)
            printf(" ");

        if (i % 2 == 0)
        {
            for (j = 1; j <= hash; j++)
                printf("-");
        }
        if (i % 2 != 0)
        {
            for (j = 1; j <= hash; j++)
                printf("#");
        }

        printf("\n");
        if (i < n)
        {
            space--;
            hash += 2;
        }
        else
        {
            space++;
            hash -= 2;
        }
    }

    return 0;
}