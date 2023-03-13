#include <stdio.h>
int zero_sum(int *ary, int n);
int main()
{
    int n, i;
    scanf("%d", &n);
    int ary[n];
    for (i = 0; i < n; i++)
        scanf("%d", &ary[i]);

    int ans = zero_sum(ary, n);
    printf("%d\n", ans);

    return 0;
}
int zero_sum(int *ary, int n)
{
    int i, sum = 0;
    for (i = 0; i < n; i++)
    {
        if (ary[i] % 10 == 0)
            sum += ary[i];
    }

    return sum;
}