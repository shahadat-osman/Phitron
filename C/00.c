#include<stdio.h>
int main()
{
    int n, m, i, temp=24;
    scanf("%d %d", &n ,&m);
    if(n>m)
    {
        for(i=n; i<=temp; i++)
        {
            
            if(i==24)
            {
                i=0;
                temp=m;
            }
            printf("%d ", i);
        }
    }
    for(i=n; i<=m; i++)
    {
        printf("%d ", i);
    }
    return 0;
}