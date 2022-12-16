#include <stdio.h>
void pattern(int n);

int main()
{
    int n;
    scanf("%d", &n);
    pattern(n);

    return 0;
}

void pattern(int n)
{
    int i, j;
    for (i = n - 1; i >= 0; i--)
    {
        for (j = 1; j < n - i; j++)
            printf(" ");

        for (j = 1; j <= i * 2 + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}