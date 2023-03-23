#include <stdio.h>
void modify(int *ptr, int z)
{
    *ptr = 10;
    z = 14;
}
int main()
{
    int x = 5, y = 7;

    modify(&x, y);

    printf("%d %d\n", x, y);
}