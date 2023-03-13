#include <stdio.h>
int main()
{
    int t, n, i, j;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        int ary[n], select;

        for (i = 1; i <= n; i++)
        {
            ary[i] = i + 1;
        }
        for (i = 1; i <= n; i++)
            printf("%d ", ary[i]);
        printf("\n");
    }
}