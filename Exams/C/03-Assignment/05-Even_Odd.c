#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void odd_even()
{
    int n, i, even = 0, odd = 0;

    scanf("%d", &n);

    int arr[n];

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
            even++;

        else if (arr[i] % 2 != 0)
            odd++;
    }

    printf("%d %d\n", even, odd);
}
int main()
{

    odd_even();

    return 0;
}
