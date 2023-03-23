// print from N to 1
#include <stdio.h>
void solve(int n)
{
    if (n < 1)
        return;
    printf("%d\n", n);
    solve(n - 1);
}
int main()
{
    int n;
    scanf("%d", &n);

    solve(n);

    return 0;
}