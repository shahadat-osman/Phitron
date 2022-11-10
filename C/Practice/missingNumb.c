#include<stdio.h>
int main()
{
    long long int i, n, x, ary[300000];
    scanf("%lld", &n);

    for(i=1; i<n; i++)
    {
        ary[i]=0;
    }
    for(i=1; i<n; i++)
    {
        scanf("%lld", &x);
        ary[x]=1;
    }
    for(i=1;i<=n; i++)
    {
        if(ary[i]==0){
        printf("%lld\n", i);
        break;}
    }
}