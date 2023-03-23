#include <stdio.h>
#include <string.h>
void str_sort(char *sent)
{
    int freq[26], i, j, k = 0;
    for (i = 0; i < 26; i++)
        freq[i] = 0;

    for (i = 0; i < strlen(sent); i++)
    {
        int insrt = sent[i] - 97;
        freq[insrt] += 1;
    }
    for (i = 0; i < 26; i++)
        if (freq[i] > 0)
            for (j = 0; j < freq[i]; j++, k++)
                sent[k] = i + 97;
}
int main()
{
    char S[100];
    scanf("%s", S);

    str_sort(S);
    puts(S);

    return 0;
}