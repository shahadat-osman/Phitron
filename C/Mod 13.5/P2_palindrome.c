#include<stdio.h>
#include<string.h>

int main()
{
    int i, j, count=0;
    char word[100];

    scanf("%s", word);
    for(i=strlen(word)-1, j=0; i>=0; i--, j++)
    {
        if(word[i]==word[j])
            count++;
    }
    if(count==strlen(word))
        printf("Yes\n");
    else
        printf("No\n");
}