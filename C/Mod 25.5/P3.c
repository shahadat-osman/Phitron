#include<stdio.h>
#include<string.h>
void array_cost(char str[], int len);

int main()
{
    char str[100];
    fgets(str, sizeof(str), stdin);

    int len=strlen(str)-1;
    array_cost(str, len);

    return 0;
}
void array_cost(char str[], int len)
{
    int i, val=0, count=0, n, ans;
    for(i=0; i<len; i++)
    {
        val+=str[i]-96;
    }

    n=val;
    while(val!=1)
    {
        val/=2;
        count++;
    }
    
    ans=1;
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