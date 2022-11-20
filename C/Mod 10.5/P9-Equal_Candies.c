#include<stdio.h>
int main()
{
    int i, n, t, j, min;
    scanf("%d", &t);

    for(i=1; i<=t; i++)
    {
        scanf("%d", &n);
        int ary[n];

        for(j=1; j<=n; j++)
        {
            scanf("%d", &ary[j]);
        }

        int max=ary[1];
        for(j=1; j<=n; j++)
        {
            if(ary[j]>max)
                max=ary[j];
        }

        int min=ary[1];
        for(j=1; j<=n; j++)
        {
            if(ary[j]<min)
                min=ary[j];
        }

        int blist[max];
        for(j=1; j<=max; j++)
        {
            blist[j]=0;
        }
        
        for(j=1; j<=max; j++)
        {
            if(ary[j]%)
        }
    }
}