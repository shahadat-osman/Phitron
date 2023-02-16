#include <stdio.h>
#include <string.h>

int main()
{
    char str[20];
    int i, state = 0;

    scanf("%s", str);
    int len = strlen(str);

    if (str[0] == 'a')
    {
        for (i = 1; i <= len; i++)
        {
            if ((str[i] == 'a' && str[len - 1] == 'b') || (str[i] == 'b' && (str[i + 1] == 'b' || str[i + 1] == '\0')))
            {
                state = 1;
            }
        }
    }
    else if (str[0] == 'b')
    {
        for (i = 1; i < len; i++)
        {
            if (str[i] == 'b')
                state = 2;
            else
            {
                state = 0;
                break;
            }
        }
    }

    if (state == 0)
        printf("Not Accepted\n");
    else if (state == 1)
        printf("Accepted Under a*b+\n");
    else if (state == 2)
        printf("Accepted Under b+\n");

    return 0;
}