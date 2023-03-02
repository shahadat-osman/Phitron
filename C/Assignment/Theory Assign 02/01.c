#include<stdio.h>
#include<string.h>

int main()
{
    int len, i;
    char str[100];
    fgets(str, sizeof(str), stdin);

    len=strlen(str)-1;

    for(i=0; i<len; i++)
    {
        if(str[i]>='A' && str[i]<='Z')
            str[i]+=32;
        else if(str[i]>='a' && str[i]<='z')
            str[i]-=32;
    }
    puts(str);

}