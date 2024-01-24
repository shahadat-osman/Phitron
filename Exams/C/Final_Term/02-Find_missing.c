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
        long long int m;
        int a, b, c;

        scanf("%lld %d %d %d", &m, &a, &b, &c);

        long long int res = a * b * c;

        if (m % res == 0)
            printf("%lld\n", m / res);

        else
            printf("-1\n");
    }
    return 0;
}
