#include <stdio.h>
int sumfunc(int n);

int main()
{
    int n;
    scanf("%d", &n);
    printf("Sum = %d\n", sumfunc(n));

    return 0;
}

int sumfunc(int n)
{
    int i, j, ary[n], sum = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ary[i]);
        sum += ary[i] % 10;
        sum += ary[i] / 1000;
    }
    return sum;
}