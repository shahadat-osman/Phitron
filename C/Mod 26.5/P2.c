#include <stdio.h>
void sort(int *ary, int n);
int main()
{
    int n, i;
    scanf("%d", &n);

    int ary[n];
    for (i = 0; i < n; i++)
        scanf("%d", &ary[i]);

    sort(ary, n);
}
void sort(int *ary, int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1; j++)
        {
            if (*(ary + j) > *(ary + j + 1))
            {
                temp = *(ary + j);
                *(ary + j) = *(ary + j + 1);
                *(ary + j + 1) = temp;
            }
        }
    }
    for (i = 0; i < n; i++)
        printf("%d ", *(ary + i));
}