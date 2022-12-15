#include <stdio.h>
int largest_func(int a, int b, int c);

int main()
{
    int a, b, c, largest, i;
    for (i = 0; i < 1; i++)
    {
        scanf("%d %d %d", &a, &b, &c);
        largest = largest_func(a, b, c);
        printf("%d is the largest number.\n", largest);
    }

    return 0;
}

int largest_func(int a, int b, int c)
{
    int largest;
    if (a > b && a > c)
        largest = a;
    else if (b > a && b > c)
        largest = b;
    else if (c > a && c > b)
        largest = c;

    return largest;
}