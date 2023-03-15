#include <stdio.h>
int is_prime(int *arr, int n);
float even_sum(int *arr, int n);
int main()
{
    int n, i;
    scanf("%d", &n);
    int ary[n];
    for (i = 0; i < n; i++)
        scanf("%d", &ary[i]);

    printf("Prime Numbers: %d\n", is_prime(ary, n));
    printf("Average of even integers: %.2f\n", even_sum(ary, n));

    return 0;
}
int is_prime(int *arr, int n)
{
    int i, j, count = 0, select, flag;
    for (i = 0; i < n; i++)
    {
        flag = 1;
        select = *(arr + i);
        if (select == 1)
            continue;
        for (j = 2; j < select; j++)
        {
            if (select == 2)
                break;
                
            if (select % j == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
            count++;
    }
    return count;
}
float even_sum(int *arr, int n)
{
    int i, sum = 0;
    float count = 0.0;
    for (i = 0; i < n; i++)
    {
        if (*(arr + i) % 2 == 0)
        {
            sum += *(arr + i);
            count++;
        }
    }
    if (sum == 0)
        return 0;

    return sum / count;
}