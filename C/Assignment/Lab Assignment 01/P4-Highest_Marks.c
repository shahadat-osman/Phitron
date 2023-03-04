#include<stdio.h>
int main()
{
    int n, i, highest;
    scanf("%d", &n);
    int mark[n], diff[n];
    for(i=1; i<=n; i++)
    {
        scanf("%d", &mark[i]);
    }
    highest=mark[1];
    for(i=1; i<=n; i++)
    {
        if(mark[i]>highest)
            highest=mark[i];
    }
    for(i=1; i<=n; i++)
    {
        diff[i]=highest-mark[i];
    }
    for(i=1; i<=n; i++)
    {
        printf("%d ", diff[i]);
    }
}