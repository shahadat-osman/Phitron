#include<stdio.h>
int main()
{
    long long int m, n, ans;

    scanf("%lld %lld", &n ,&m);

    if(n==1 && m==1)
        ans=0;
    else if(n==1 && m>1)
        ans=m-1;
    else if(n>1 && m==1)
        ans=n-1;
    else if(n>1 && m>1)
        ans=(m-1)*n;
    printf("%lld\n", ans);
}