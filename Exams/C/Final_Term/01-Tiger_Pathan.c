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
        int n, Tiger = 0, Pathan = 0;
        scanf("%d", &n);

        char s[100009];

        scanf("%s",s);

        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'T')
                Tiger++;
            else if (s[i] == 'P')
                Pathan++;
        }

        if (Tiger > Pathan)
            printf("Tiger\n");
        else if (Pathan > Tiger)
            printf("Pathaan\n");
        else
            printf("Draw\n");
    }
    return 0;
}
