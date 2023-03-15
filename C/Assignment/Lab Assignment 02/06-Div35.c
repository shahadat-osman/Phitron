#include <stdio.h>
int div_3(int *ary, int n);
int div_5(int *ary, int n);
int main()
{
    int n, i, count = 0;
    scanf("%d", &n);

    int ary[n];
    for (i = 0; i < n; i++)
        scanf("%d", &ary[i]);

    if (div_3(ary, n) == -1 && div_5(ary, n) == -1)
        printf("-1\n");

    else
    {
        for (i = 0; i < n; i++)
            if (ary[i] % 3 == 0 || ary[i] % 5 == 0)
                count++;
        printf("%d\n", count);
    }
}
int div_3(int *ary, int n)
{
    int i, counter = 0;
    for (i = 0; i < n; i++)
        if (ary[i] % 3 == 0)
            counter++;

    if (counter != 0)
        return counter;
    return -1;
}
int div_5(int *ary, int n)
{
    int i, counter = 0;
    for (i = 0; i < n; i++)
        if (ary[i] % 5 == 0)
            counter++;

    if (counter != 0)
        return counter;
    return -1;
}