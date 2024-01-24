#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n, m, i, j;
    scanf("%d %d", &n, &m);

    int arr[n + 1][m + 1];

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (j = 1; j <= m; j++)
        printf("%d ", arr[n][j]);

    printf("\n");

    for (j = 1; j <= n; j++)
        printf("%d ", arr[j][m]);
    printf("\n");
    return 0;
}
