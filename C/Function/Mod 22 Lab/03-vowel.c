#include <stdio.h>
int is_vowel(char x);
int main()
{
    char ch;
    ch = getchar();
    getchar();

    if (is_vowel(ch) == 1)
        printf("%c is vowel\n", ch);
    else
        printf("%c is consonant\n", ch);

    return 0;
}
int is_vowel(char x)
{
    if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u')
        return 1;

    else
        return 0;
}