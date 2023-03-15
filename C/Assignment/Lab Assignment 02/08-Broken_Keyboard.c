#include<stdio.h>
#include<string.h>
void solve(char str[]);
int main()
{
    char str[100];
    scanf("%s", str);

    solve(str);
}
void solve(char str[])
{
    int i, j;
    char fn[100];
    for(i=0, j=0; i<strlen(str); i++)
    {
        if(i%2==0)
        {
            fn[j]=str[i];
            j++;
            continue;
        }
        else
        {
            fn[j]=str[i];
            fn[j+1]=str[i];
            j+=2;
        }
    }
    puts(fn);
}