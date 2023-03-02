#include <stdio.h>
#include <string.h>
int checker(char x);

int main()
{
    char ary[100], ch;
    int n, i, count = 0, len, one_prsnt = 0, seven_prsnt = 0, nine_prsnt = 0;

    fgets(ary, sizeof(ary), stdin);

    len = strlen(ary) - 1;

    for (i = 0; i < len; i++)
    {
        ch = ary[i];
        if (checker(ch) == 1)
            one_prsnt = 1;
        if (checker(ch) == 7)
            seven_prsnt = 1;
        if (checker(ch) == 9)
            nine_prsnt = 1;
    }
    if (one_prsnt == 1 && seven_prsnt == 1 && nine_prsnt == 1)
        printf("Yes\n");
    else
        printf("No\n");
}
int checker(char x)
{
    if (x == '1')
        return 1;
    if (x == '7')
        return 7;
    if (x == '9')
        return 9;

    return 0;
}