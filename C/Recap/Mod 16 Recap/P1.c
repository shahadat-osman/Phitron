#include<stdio.h>
int main()
{
    int numerator, denominator, quotient, remainder;
    scanf("%d %d", &numerator, &denominator);
    quotient= numerator/denominator;
    remainder= numerator%denominator;
    printf("%d\n%d\n", quotient, remainder);

    return 0;
}