#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int count_before_one(int *arr, int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 1)
            count++;

        else
            break;
    }

    return count;
}

int main()
{

    int n, result;

    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    result = count_before_one(arr, n);

    printf("%d\n", result);

    return 0;
}
