#include<stdio.h>
#include<string.h>
int main()
{
    int n, i, count=1;
    scanf("%d", &n);
    
    char str[n];
    scanf("%s", str);
    int max=0;
    for(i=0; i<=strlen(str)-2; i++)
    {
        if(str[i]==str[i+1])
            count++;
        else if(count>max)
        {
            max=count;
            count=1;
        }
    }
    if(count>max)
        max=count;
    
    printf("%d\n", max);
}