#include <stdio.h>
#include <string.h>

void upper_case(char str[]);

int main()
{
    char str[100];
    fgets(str, sizeof(str), stdin);
    int len = strlen(str) - 1;

    upper_case(str);
}
void upper_case(char str[])
{
    int len = strlen(str) - 1;
    for (int i = 0; i < len; i++)
    {
        if (str[i] % 2 == 0)
            str[i] -= 32;
    }

    puts(str);
}