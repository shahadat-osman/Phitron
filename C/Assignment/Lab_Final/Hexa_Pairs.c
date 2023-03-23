#include<stdio.h>
int gcd(int x, int y);
int main()
{
    int t, n, i, j, count;
    scanf("%d", &t);
    
    while(t--)
    {
        count=0;
        scanf("%d", &n);

        int ary[n];
        for(i=0; i<n; i++)
            scanf("%d", &ary[i]);

        for(i=0; i<n; i++)
            for(j=0; j<n; j++)
                if(i!=j)
                    if(gcd(ary[i], ary[j])==1)
                        count++;
        
        printf("%d\n", count);
    }
}
int gcd(int x, int y)
{
    int i, ans;
    for(i=x; i>=1; i--)
    {
        if(x%i==0 && y%i==0)
        {
             ans=i;
             break;
        }
    }
    return ans;
}