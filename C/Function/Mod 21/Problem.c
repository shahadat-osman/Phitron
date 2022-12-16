#include <stdio.h>
int seven_present(int n);
int sum_digit(int n);
int last_digit(int n);

int main()
{
    int n;
    scanf("%d", &n);

    if (seven_present(n) == 1 && sum_digit(n) > 10 && last_digit(n) == 1)
        printf("Correct\n");
    else
        printf("Not Correct\n");

    return 0;
}
int last_digit(int n)
{
    int ld = n % 10;
    if (ld == 2 || ld == 3 || ld == 5 || ld == 7)
        return 1;

    return 0;
}

int seven_present(int n)
{
    while (n > 0)
    {
        if (n % 10 == 7)
            return 1;

        n /= 10;
    }
    return 0;
}

int sum_digit(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}