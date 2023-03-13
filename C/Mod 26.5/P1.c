#include <stdio.h>
float avg()
{
    int x, y, *p, *q;

    scanf("%d %d", &x, &y);
    p = &x;
    q = &y;
    float avg = (*p + *q) / 2.0;

    return avg;
}
int main()
{
    printf("%.2f\n", avg());

    return 0;
}