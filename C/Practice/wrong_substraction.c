#include<stdio.h>
int main()
{
    long long int n, k, i;
    scanf("%lld %lld", &n, &k);

    for(i=1; i<=k; i++)
    if(n%10==0)
        n/=10;
    else
        n--;

    printf("%lld\n", n);
}