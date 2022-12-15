#include<stdio.h>
int my_sum(int x, int y)
{
    int addition;
    addition=x+y;

    return addition;
}
int main()
{
    int a, b, sum;
    scanf("%d %d", &a, &b);

    sum=my_sum(a,b);
    printf("Sum = %d\n", sum);

    return 0;
}