#include<stdio.h>
#include<string.h>
int main()
{
    char s[100], s2[100];
    scanf("%s %s", s, s2 );
    //printf("%s\n%s", s, s2);
    int i, n=0;
    for(i=strlen(s); i<=strlen(s)+strlen(s2); i++)
    {
        s[i]=s2[n];
        n++;
    }
    printf("\n%s", s);
}