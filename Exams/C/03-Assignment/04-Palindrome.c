#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int is_palindrome(char *str)
{
    int i, j, len;
    len = strlen(str);

    for (i = 0, j = len - 1; i < len / 2; i++, j--)
    {
        if (str[i] != str[j])
            return 0;
    }

    return 1;
}
int main()
{
    int res;
    char str[1009];

    scanf("%s", str);

    res = is_palindrome(str);

    if (res == 1)
        printf("Palindrome\n");

    else
        printf("Not Palindrome\n");

    return 0;
}
