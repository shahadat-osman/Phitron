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
        int M1, M2, D, total, final_d, ans, one_p;

        scanf("%d %d %d", &M1, &M2, &D);

        one_p = M1 * D;

        total = M1 + M2;

        final_d = one_p / total;

        ans = D - final_d;

        printf("%d\n", ans);
    }

    return 0;
}
