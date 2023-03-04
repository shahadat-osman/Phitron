#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    int len, n, i;
    fgets(str, sizeof(str), stdin);
    scanf("%d", &n);
    len=strlen(str)-1;

    for(i=0; i<len; i++)
    {
        str[i]+=n;
        if(str[i]>'z')
            str[i]-=26;
    }
    puts(str);

    return 0;
}