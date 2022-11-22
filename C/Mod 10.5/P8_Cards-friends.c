#include<stdio.h>
int main()
{
    int t, i, w, h;
    long long int n, sheet;
    scanf("%d", &t);
    int  result[t];
    for(i=1; i<=t; i++)
    {
        scanf("%d %d %lld", &w, &h, &n);
        sheet=1;
        while(w%2==0 || h%2==0)
        {
            if(w%2==0)
            {
                w/=2;
                sheet*=2;
            }
            if(h%2==0)
            {
                h/=2;
                sheet*=2;
            }
        }
        if(sheet>=n)
            result[i]=1;
        else
            result[i]=0;
    }
    printf("%lld\n", sheet);
    for(i=1; i<=t; i++)
    {
        if(result[i]==1)
            printf("Yes\n");
        else
            printf("No\n");
    }
}