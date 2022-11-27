#include<stdio.h>
int main()
{
    char sent[1000];
    int i=0, counter=0;
    scanf("%s", sent);
    while(sent[i]!='\0')
    {
        if(sent[i]=='a' || sent[i]=='e' || sent[i]=='i' || sent[i]=='o' || sent[i]=='u')
            counter++;
        i++;
    }
    printf("%d\n", counter);
}
