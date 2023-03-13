#include <stdio.h>
int main()
{
    int n, i, *ptr;
    scanf("%d", &n);

    int ary[n];
    for (i = 0; i < n; i++)
        scanf("%d", &ary[i]);

    ptr = ary;
    for (i = 0; i < n; i++)
        printf("%d ", *(ptr + i));

    return 0;
}
