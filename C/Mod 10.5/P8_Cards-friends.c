#include<stdio.h>
int main()
{
    long long int t, i, w, h, n, r, sheet=1;
    scanf("%lld", &t);
    int  result[t];
    for(i=1; i<=t; i++)
    {
        scanf("%lld %lld %lld", &w, &h, &n);
        r=w*h;
        {
        if(w%2==0 || h%2==0)
        {
            sheet=(r/2)*2;
        }
        else
            sheet=1;
            result[i]=0;
        }
        if(sheet>=n)
        result[i]=1;
        
    }
    printf("\n");
    for(i=1; i<=t; i++)
    {
        printf("%d\n", result[i]);
    }
    
}