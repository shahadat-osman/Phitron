#include<stdio.h>
#include<string.h>

int main()
{
    int t, i, j, flag=0;
    char str[25];
    scanf("%d", &t);
    while(t--)
    {
        scanf("%s", str);
        int len=strlen(str)-1;
        for(i=0, j=len; i<len; i++, j--)
        {
            flag=0;
            if(str[i]==str[j])
                flag=1;
            else
            {
                break;
            }
        }
        if(flag==0)
        {
            printf("Case #1: Not Palindrome\n");
        }
        else if(flag==1 && len>7)
        {
            printf("Case #2: %c%d%c\n", str[0], len-1, str[len]);
        }
        else if(flag==1)
        {
            printf("Case #3: %s\n", str);
        }
    }
}