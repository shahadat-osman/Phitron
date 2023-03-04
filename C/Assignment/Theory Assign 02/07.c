#include <stdio.h>
float median(int size, int ary[]);
int main()
{
    int n, i;
    float ans;
    scanf("%d", &n);

    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    ans = median(n, arr);
    printf("The median is %.2f\n", ans);

    return 0;
}
float median(int size, int ary[])
{
    int i, j, temp, mid;
    float result;
    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - 1; j++)
        {
            if (ary[j] > ary[j + 1])
            {
                temp = ary[j];
                ary[j] = ary[j + 1];
                ary[j + 1] = temp;
            }
        }
    }
    if (size % 2 != 0)
    {
        mid = (size / 2);
        result = ary[mid];
    }
    else
    {
        mid = (size / 2) - 1;
        result = (ary[mid] + ary[mid + 1]) / 2.0;
    }
    
    return result;
}