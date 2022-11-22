#include<stdio.h>
int main()
{
    char word[1005];
    fgets(word, sizeof(word), stdin);
    if(word[0]>='a' && word[0]<='z')
    {
        word[0]-=32;
    }
    printf("%s\n", word);
}