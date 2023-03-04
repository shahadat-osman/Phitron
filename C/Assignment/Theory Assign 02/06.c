#include <stdio.h>
float factorial(int x);
float ratio(int p, int q);

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    float ans = ratio(a, b);
    printf("%d! / %d! = %.2f\n", a, b, ans);

    return 0;
}

float factorial(int x)
{
    int fact = 1, i;
    for (i = 1; i <= x; i++)
    {
        fact *= i;
    }
    return fact;
}

float ratio(int p, int q)
{
    return factorial(p) / factorial(q);
}