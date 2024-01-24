#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n, i, x, flag = 0;

        scanf("%d", &n);

        int arr[n];

        for (i = 0; i < n; i++)
            scanf("%d", &arr[i]);

        scanf("%d", &x);

        for (i = 0; i < n; i++)
        {
            if (arr[i] == x)
            {
                flag = 1;
            }
        }
        if (flag == 1)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}