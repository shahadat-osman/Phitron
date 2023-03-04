#include<stdio.h>
int main()
{
    long long int n, total;
    scanf("%lld", &n);

    total=(n*(n-1)/2);

    printf("%lld\n", total);
}