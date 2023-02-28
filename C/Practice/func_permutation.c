#include <stdio.h>
int fact(int x);

int main()
{
    int n, r, prm, comb;
    scanf("%d %d", &n, &r);

    prm = fact(n) / fact(n - r);
    comb = fact(n) / (fact(n - r) * fact(r));

    printf("Permutation %d\nCombination %d\n", prm, comb);

    return 0;
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