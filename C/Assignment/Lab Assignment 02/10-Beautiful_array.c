#include <stdio.h>
#include <math.h>
void solve(int *ary, int n);
int has_seven(int n);
int main()
{
    int n, i;
    scanf("%d", &n);
    int ary[n];
    for (i = 0; i < n; i++)
        scanf("%d", &ary[i]);

    solve(ary, n);
}
void solve(int *ary, int size)
{
    int i, h_size, count = 0;
    for (i = 0; i < size; i++)
    {
        int value = *(ary + i);
        if (has_seven(value))
            count++;
    }
    if (size % 2 == 0)
        h_size = size / 2;
    else
        h_size = (size / 2) + 1;

    if (count >= h_size)
        printf("Beautiful\n");
    else
        printf("Ugly\n");
}
int has_seven(int n)
{
    while (n != 0)
    {
        if (n % 10 == 7)
            return 1;
        n /= 10;
    }
    return 0;
}