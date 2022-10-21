#include<stdio.h>
int main()
{
    char ch;

    printf("Enter a charecter:\n");
    scanf("%c", &ch);

    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    {
        printf("This is a Vowel.\n");
    }
    else if(ch>='a' && ch<='z' || ch>='A' && ch<='Z')
    {
        printf("This is consonent.\n");
    }
    else
    {
        printf("This is not an Alphabet.\n");
    }
    return 0;
}