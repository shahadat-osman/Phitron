#include<stdio.h>
int main()
{
    int n, i, j, total=0, flag, t=1;
    scanf("%d", &n);
    int ary[n], prime[n];
    for(i=1; i<=n; i++)
    {
        scanf("%d", &ary[i]);
    }

    for(i=1; i<=n; i++)
    {
        flag=0;
        for(j=2; j<=ary[i]/2; j++)
        {
            if(ary[i]%j==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            total++;
            prime[t]=ary[i];
            t++;
        }
    }

    printf("%d\n", total);

    for(i=1; i<t; i++)
    {
        printf("%d ", prime[i]);
    }
}