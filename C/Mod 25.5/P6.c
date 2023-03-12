#include <stdio.h>
int sum(int *p, int *q, int *r)
{
    return *p + *q + *r;
}
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int r = sum(&a, &b, &c);

    printf("%d\n", r);

    return 0;
}