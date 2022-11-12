#include<stdio.h>
int main()
{
    long long int n, i, moves=0;
    scanf("%lld", &n);
    int ary[200003];
    for(i=1; i<=n; i++)
    {
        scanf("%d", &ary[i]);
    }
    for(i=2; i<=n; i++)
    {
        if(ary[i]<ary[i-1])
        {
            moves+=ary[i-1]- ary[i];
            ary[i]=ary[i-1];
        }
    }
    printf("%lld\n", moves);
}