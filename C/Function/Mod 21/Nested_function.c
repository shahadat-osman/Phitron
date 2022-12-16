#include <stdio.h>
#include <math.h>
float func(int x, int y);
int absolute(int x);

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    float ans = func(a, b);

    printf("%f\n", ans);

    return 0;
}

float func(int x, int y)
{
    int tmp = absolute(x - 3) + (y + 4) * (y + 4);

    return sqrt(tmp);
}

int absolute(int x)
{
    if (x >= 0)
        return x;
    else
        return (-1) * x;
}