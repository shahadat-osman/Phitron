#include <stdio.h>
int solve(int ary[], int n);
int main()
{
    int n, i;
    scanf("%d", &n);
    int ary[n];
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &ary[i]);
    }

    int ans = solve(ary, n);
    printf("%d\n", ans);

    return 0;
}
int solve(int ary[], int n)
{
    int sum = 0, i;
    for (i = 1; i <= n; i++)
    {
        if((i%2!=0 && ary[i]%2!=0) || (i%2==0 && ary[i]%2==0))
            sum += i + ary[i];
    }
    if (sum == 0)
        return 0;
    else
        return sum;
}