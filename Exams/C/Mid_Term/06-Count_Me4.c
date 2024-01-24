#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    char str[10009];

    scanf("%s", str);

    int arr[27], i, j, len;

    len = strlen(str);

    for (i = 1; i <= 26; i++)
        arr[i] = 0;

    for (i = 0; i < len; i++)
    {
        int d;
        d = str[i] - 96;
        arr[d]++;
    }

    for (i = 1; i <= 26; i++)
    {
        if (arr[i] != 0)
        {
            printf("%c - %d\n", i + 96, arr[i]);
        }
    }

    return 0;
}
