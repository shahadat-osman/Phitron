#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n, i, j, two = 0, three = 0;

    scanf("%d", &n);

    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0 && arr[i] % 3 == 0)
        {
            two++;
            continue;
        }
        if (arr[i] % 2 == 0)
            two++;

        if (arr[i] % 3 == 0)
            three++;
    }

    printf("%d %d\n", two, three);

    return 0;
}
