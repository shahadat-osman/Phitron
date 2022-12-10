#include<stdio.h>
#include<string.h>

int main()
{
    int x, y, sum, multi, i, ans=0;
    char str[21];

    scanf("%s", str);
    scanf("%d %d", &x, &y);
    
    for(i=0; i<strlen(str); i++)
    {
        if(str[i]=='+')
        {
            sum=x+y;
            ans+=sum;
        }
        else if(str[i]=='*')
        {
            multi=x*y;
            ans+=multi;
        }
    }
    printf("%d\n", ans);

    return 0;
}