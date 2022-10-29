#include<stdio.h>
int main()
{
    long long int x;
    int i, sum=0;

    scanf("%lld", &x);
    for( ; x; x/=10)
    {
        
        sum +=x%10;
        
    }
    printf("%d\n", sum);

    return 0;
}
