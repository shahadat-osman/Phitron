#include<stdio.h>

int main()
{
    long long int n, pos, op, i, N;
    scanf("%lld %lld", &n, &pos);
    
    {
    if(n%2!=0)
        N=(n/2)+1;
    else
        N=n/2;
    }
    {
    if(pos<=N)
    {
        for(i=1; i<=N; i+=2)
            op=(2*pos)-1;
    }
    else
    {
        for(i=2; i<=N; i+=2)
            op=(pos-N)*2;
    }
    }
    printf("%lld\n", op);

    return 0;
}