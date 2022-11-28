#include<stdio.h>
#include<string.h>

int main()
{
    int i, vowel=0, cons=0;
    char string[100];
    scanf("%s", string);
    //fgets(string, sizeof(string), stdin);
    for(i=0; i<strlen(string); i++)
    {
        if(string[i]=='a' || string[i]=='e' || string[i]=='i' || string[i]=='o' || string[i]=='u')
            vowel++;
        else
            cons++;
    }
    printf("Vowel- %d\nConsonant- %d\n", vowel, cons);
}