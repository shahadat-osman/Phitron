#include<stdio.h>
#include<string.h>
int main()
{
    char word[100];
    int n, i, length;

    fgets(word, sizeof(word), stdin);
        length=strlen(word)-1;
        printf("%d\n", length);

        if(length>10)
        {
            printf("%c%d%c\n", word[0], length-2, word[length-1]);
        }
        else
        puts(word);
}