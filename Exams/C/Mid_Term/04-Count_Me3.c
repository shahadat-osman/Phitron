#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        char str[1000000];
        scanf("%s", str);

        int len, Capital = 0, small = 0, digit = 0;
        len = strlen(str);
        for (int i = 0; i < len; i++)
        {
            if (str[i] >= 97 && str[i] <= 122)
                small++;

            else if (str[i] >= 48 && str[i] <= 57)
                digit++;

            else
                Capital++;
        }

        printf("%d %d %d\n", Capital, small, digit);
    }

    return 0;
}
