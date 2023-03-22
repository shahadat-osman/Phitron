#include <stdio.h>
int solve(int ar[], int n)
{
    if (n == 0)
        return 0;
    int s = solve(ar + 1, n - 1);
    return (*(ar) % 10) + s;
}

int main()
{
    int n, s;
    scanf("%d", &n);

    int ary[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &ary[i]);

    s = solve(ary, n);
    printf("%d\n", s);

    return 0;
}