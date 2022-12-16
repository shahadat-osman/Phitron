#include <stdio.h>
int calculation(char a, int x, int y);

int main()
{
    char sym;
    int a, b, result;
    scanf("%c %d %d", &sym, &a, &b);

    result = calculation(sym, a, b);
    printf("%d\n", result);

    return 0;
}

int calculation(char a, int x, int y)
{
    if (a == '+')
        return x + y;
    else if (a == '-')
        return x - y;
    else if (a == '*')
        return x * y;
    else if (a == '/')
        return x / y;

    return 0;
}