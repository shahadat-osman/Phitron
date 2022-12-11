#include<stdio.h>
#include<string.h>

int main()
{
    int t, i, j, flag=0;
    char word[25];
    scanf("%d", &t);
    while(t--)
    {
        scanf("%s", word);
        int len=strlen(word);
        for(i=0, j=len-1; i<len; i++, j--)
        {
            flag=0;
            if(word[i]==word[j])
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
            printf("Case #2: %c%d%c\n", word[0], len-2, word[len-1]);
        }
        else if(flag==1 && len<=7)
        {
            printf("Case #3: %s\n", word);
        }
    }
}