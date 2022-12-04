#include<stdio.h>
#include<string.h>
int main()
{
    int i, count=1;
    char string[100];
    scanf("%s", string);
    for(i=0; i<strlen(string); i++)
    {
        if(!(string[i]=='0' || string[i]=='1'))
        {
            count=0;
            break;
        }
    }
    if(count==1)
        printf("YES\n");
    else 
        printf("NO\n");
}