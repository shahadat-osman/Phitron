#include <stdio.h>
#include <math.h>
float area(int n);
int main()
{
    int r;
    scanf("%d", &r);

    float ans = area(r);
    printf("%.2f\n", ans);

    return 0;
}
float area(int n)
{
    float pi = 3.1416;

    return pi * pow(n, 2);
}