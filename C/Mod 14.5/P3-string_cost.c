#include<stdio.h>
#include<string.h>

int main()
{
    int i, count=0, n, sum=0;
    char string[100];
    scanf("%s", string);
    for(i=0; i<strlen(string); i++)
    {
        sum+=string[i]-96;
    }
    n=sum;
    while(sum!=1)
    {
        sum/=2;
        count++;
    }
    int ans=1;
    for(i=0; i<count; i++)
    {
        ans*=2;
    }
    if(n==ans)
    {
        printf("Yes\ncost=2^%d\n", count);
    }
    else 
        printf("No\n");
}