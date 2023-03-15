#include <stdio.h>
void solve();
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        solve();
    }
}
void solve()
{
    int n, numb;
    scanf("%d", &n);

    numb = (n / 4) - 3;

    for (int i = 1; i <= 4; i++)
    {
        printf("%d ", numb);
        numb += 2;
    }
    printf("\n");
}