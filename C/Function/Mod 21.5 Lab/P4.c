#include <stdio.h>
void even_func(int n);

int main()
{
    int n;
    scanf("%d", &n);
    even_func(n);

    return 0;
}

void even_func(int n)
{
    int i;
    for (i = 2; i <= n; i++)
    {
        if (i % 2 == 0)
            printf("%d ", i);
    }
}