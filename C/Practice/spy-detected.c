#include<stdio.h>
int main()
{
    int i, j, t, n;
    scanf("%d", &t);

    int index[t];
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
        
        int spy[max];
        for(j=1; j<=max; j++)
        {
            spy[j]=0;
        }
        for(j=1; j<=n; j++)
        {
            spy[ary[j]]+=1;
        }
        for(j=1; j<=n; j++)
        {
            if(spy[ary[j]]==1)
            index[i]=j;
        }
    }
    for(i=1; i<=t; i++)
    {
        printf("%d\n", index[i]);
    }
}