#include <stdio.h>
int main()
{
    int t, count = 0, i, k, hold;
    scanf("%d", &t);

    while (t--)
    {
        hold = 0;
        count=0;
        scanf("%d", &k);
        for (i = 1; ; i++)
        {
            if (!(i % 3 == 0 || i % 10 == 3))
                count++;

            if (count == k)
            {
                hold = i;
                break;
            }
        }
        printf("%d\n", hold);
    }
    return 0;
}