#include <stdio.h>
void swap(int *p, int *q);
int main()
{
    int n, i, Q, L, R, *p, *q;
    scanf("%d", &n);

    int ary[n];
    for (i = 1; i <= n; i++)
        scanf("%d", &ary[i]);

    scanf("%d", &Q);
    while (Q--)
    {
        scanf("%d %d", &L, &R);
        swap(&ary[L], &ary[R]);
    }
    for (i = 1; i <= n; i++)
        printf("%d ", ary[i]);
}
void swap(int *p, int *q)
{
    int temp = *p;
    *p = *q;
    *q = temp;
}