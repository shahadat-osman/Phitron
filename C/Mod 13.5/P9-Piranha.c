#include<stdio.h>
int main()
{
    int t, i, n, j, index, max;
    scanf("%d", &t);
    int output[t];
    for(i=1; i<=t; i++)
    {
        index=0;
        scanf("%d", &n);
        int ary[n];
        for(j=1; j<=n; j++)
        {
            scanf("%d", &ary[j]);
        }
        max=ary[1];
        for(j=1; j<=n; j++)
        {
            if(ary[j]>max)
            max=ary[j];
        }
        for(j=1; j<=n; j++)
        {
            if(j==1 && ary[j]==max && ary[j]>ary[j+1])
                index=j;
            else if(j==n && ary[j]==max && ary[j]>ary[j-1])
                index=j;
            else if(j!=1 && j!=n && ary[j]==max && (ary[j]>ary[j-1] || ary[j]>ary[j+1]))
                index=j;
        }
        if(index>0)
            output[i]=index;
        else
            output[i]=-1;
    }
    for(i=1; i<=t; i++)
    {
        printf("%d\n", output[i]);
    }
}