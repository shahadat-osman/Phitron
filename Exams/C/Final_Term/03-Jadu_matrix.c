#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n, m, k, i, j;
    scanf("%d %d", &n, &m);

    int arr[n + 1][m + 1];

    k = n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    if (n!=m)
    {
        printf("NO\n");
        return 0;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if ((i == j && arr[i][j] != 1) || (i != j && arr[i][j] != 0 && j != k) || (arr[i][k] != 1))
            {
                printf("NO\n");
                return 0;
            }
        }
        k--;
    }
    printf("YES\n");
    return 0;
}
