#include<stdio.h>
int main()
{
    int n, i, flag=0, m;
    scanf("%d", &n);
    int ary[n];
    for(i=1; i<=n; i++)
    {
        scanf("%d", &ary[i]);
    }
    for(i=1; i<n; i++)
    {
        if(ary[1]==ary[i+1])
        {
            flag++;
        }
    }
    if(flag==n-1)
        printf("Yes\n");
    else 
        printf("No\n");
}