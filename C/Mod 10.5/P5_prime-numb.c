#include<stdio.h>
int main()
{
    int n, i, j=2, factor=0, prime[1000];
    scanf("%d", &n);
    int ary[n], element[n];
    for(i=1; i<=n; i++)
    {
        scanf("%d", &ary[i]);
    }
    for(i=1; i<=n; i++)
    {
        do
        {
            if(ary[i]%j==0)
            {
                factor++;
            }
        } while (j<ary[i]/2);
        j++;
        if(factor>2)
        {
            prime[ary[i]]=0;
        }
        else
        {
            prime[ary[i]]=1;
        }
    }
    for(i=1; i<=prime[1000]; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(prime[i]==1)
            {
                element[j]=i;
            }
        }
    }
    //printf("%d", total);
}