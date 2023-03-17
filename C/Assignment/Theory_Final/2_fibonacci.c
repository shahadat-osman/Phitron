#include <stdio.h>
int main()
{
    int i, n, first = 0, second = 1, next;
    scanf("%d", &n);

    printf("%d %d ", first, second);
    for (i = 3; i <= n; i++)
    {
        next = first + second;
        printf("%d ", next);

        first = second;
        second = next;
    }
    return 0;
}