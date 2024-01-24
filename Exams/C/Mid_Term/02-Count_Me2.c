#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    char str[1000000];

    scanf("%s", str);

    int len, consonants = 0;
    len = strlen(str);

    for (int i = 0; i < len; i++)
    {
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u')
            consonants++;
    }

    printf("%d\n", consonants);

    return 0;
}
