#include <stdio.h>
int main()
{
    int n, i, sum = 0, count = 0, flag = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (count != 3)
        {
            sum += i;
            count++;
            if (count == 3)
                flag = 0;
            continue;
        }
        else if (count == 3)
        {
            sum -= i;
            flag++;
            if (flag == 3)
                count = 0;
        }
    }
    printf("%d\n", sum);
}
