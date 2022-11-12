#include<stdio.h>
int main()
{
    int list[105], n, i, ev=0, od=0, ans;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        scanf("%d", &list[i]);
    }
    for(i=1; i<=n; i++)
    {
        if(list[i]%2==0)
            ev++;
        else
            od++;
    }
    if(ev==1)
    {
        for(i=1; i<=n; i++)
        {
            if(list[i]%2==0)
            ans=i;
        }
    }
    else
    {
        for(i=1; i<=n; i++)
        {
            if(list[i]%2!=0)
            {
            ans=i;
            }
        }
    }
    printf("%d\n", ans);
}