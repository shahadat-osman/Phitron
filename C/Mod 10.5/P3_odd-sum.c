#include<stdio.h>
int main() 
{
    int n, i;
    scanf("%d",&n);

    int ary[n], sum=0;
    for(i=1; i<=n; i++)
    {
        scanf("%d",&ary[i]);
    }
    for(i=1;i<=n;i++)
    {
        if(ary[i]%2!=0)
            sum+=ary[i];
    }
    if(sum%2==0)
        printf("YES\n");
    else
        printf("NO\n");
}