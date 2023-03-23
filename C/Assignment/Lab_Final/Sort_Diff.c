#include <stdio.h>
int main()
{
    int n, i, j, temp;
    scanf("%d", &n);
    int o_ar[n], s_ar[n];
    for (i = 0; i < n; i++)
        scanf("%d", &o_ar[i]);
    for (i = 0; i < n; i++)
        scanf("%d", &s_ar[i]);

    // first array sort in ascending
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1; j++)
        {
            if (o_ar[j] > o_ar[j + 1])
            {
                temp = o_ar[j];
                o_ar[j] = o_ar[j + 1];
                o_ar[j + 1] = temp;
            }
        }
    }
    // second array sort in descending
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1; j++)
        {
            if (s_ar[j] < s_ar[j + 1])
            {
                temp = s_ar[j];
                s_ar[j] = s_ar[j + 1];
                s_ar[j + 1] = temp;
            }
        }
    }
    for (i = 0; i < n; i++)
        printf("%d ", o_ar[i] - s_ar[i]);
    // printf("\n");
}