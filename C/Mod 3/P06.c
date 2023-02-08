#include <stdio.h>
int main()
{
    int m, n;

    printf("Input a number: ");
    scanf("%d", &m);

    if (m > 0)
        n = 1;

    if (m == 0)
        n = 0;

    if (m < 0)
        n = -1;

    printf("The value of m = %d\n", m);
    printf("The value of n = %d\n", n);

    return 0;
}