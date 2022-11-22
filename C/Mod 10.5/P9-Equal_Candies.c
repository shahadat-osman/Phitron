#include<stdio.h>
int main()
{
    int i, n, t, j, min, count;
    scanf("%d", &t);
    int list[t];
    for(i=1; i<=t; i++)
    {
        count=0;
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

        min=ary[1];
        for(j=1; j<=n; j++)
        {
            if(ary[j]<min)
                min=ary[j];
        }
        for(j=1; j<=n; j++)
        {
            count+=ary[j]-min;
            
        }
        list[i]=count;
        
    }
    for(i=1; i<=t; i++)
    {
    printf("%d\n", list[i]);
    }
}