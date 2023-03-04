#include <stdio.h>
int add_three_nums(int a, int b, int c);

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);

    int ans = add_three_nums(x, y, 0);

    printf("%d\n", ans);

    return 0;
}

int add_three_nums(int a, int b, int c)
{
    return a + b + c;
}