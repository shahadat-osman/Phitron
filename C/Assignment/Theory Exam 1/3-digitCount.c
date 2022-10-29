#include<stdio.h>
int main()
{
    long long int x;
    int count=0;

    scanf("%lld", &x);
    for( ; x; x/=1)
    {
        x=x/10;
        count++;
    }
    printf("%d \n", count);

    return 0;
}