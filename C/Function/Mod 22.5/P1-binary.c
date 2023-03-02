#include<stdio.h>
#include<string.h>
void binary_check(int x, char ary[]);

int main()
{
    char str[100];
    int len;

    fgets(str, sizeof(str), stdin);

    len=strlen(str)-1;

    binary_check(len, str);

    return 0;
}
void binary_check(int x, char ary[])
{
    int i, flag=0;
    for(i=0; i<x; i++)
    {
        if(ary[i]=='1' || ary[i]=='0')
            flag++;
    }
    if(flag==x)
        printf("Yes\n");
    else
        printf("No\n");
    
    return;
}