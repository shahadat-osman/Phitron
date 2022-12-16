#include <stdio.h>
void myfunc(int n);

int main()
{
    int n;
    scanf("%d", &n);
    myfunc(n);

    return 0;
}
void myfunc(int n)
{
    int i;
    if (n > 0)
    {
        for (i = n; i >= -n; i--)
        {
            printf("%d ", i);
        }
    }
    else if (n < 0)
    {
        for (i = n; i <= -n; i++)
        {
            printf("%d ", i);
        }
    }
}