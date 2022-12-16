#include <stdio.h>
int fact(int x);

int main()
{
    int n, r;
    scanf("%d %d", &n, &r);

    int ans = fact(n)/(fact(n-r)* fact(r));
    printf("nCr = %d\n", ans);
}

int fact(int x)
{
    int res = 1, i;
    for (i = 1; i <= x; i++)
    {
        res *= i;
    }
    return res;
}