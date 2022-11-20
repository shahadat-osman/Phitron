#include<stdio.h>
int main()
{
    int i, t, n, sum, a, b, c, r;
    scanf("%d", &t);
    int ans[t];
    for(i=1; i<=t; i++)
    {
        scanf("%d %d %d %d", &sum, &a, &b, &c);
        r=a+b+c;
        ans[i]=sum-r;
    }
    for(i=1; i<=t; i++)
    {
        printf("%d\n", ans[i]);
    }
}