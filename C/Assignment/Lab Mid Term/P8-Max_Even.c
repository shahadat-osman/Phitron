#include<stdio.h>
int main()
{
    int n, i, j, max;
    scanf("%d", &n);

    int ary[n];
    for(i=0; i<n; i++)
    {
        scanf("%d", &ary[i]);
    }
    if(n==1 && ary[0]%2==0)
        max=ary[0];
    else
        max=0;
    for(i=0; i<n; i++)
    {
        if(ary[i]%2==0 && ary[i]>max)
            max=ary[i];
    }
    for(j=0; j<n-1; j++)
    {
        for(i=j+1; i<=n-1; i++)
        {
            int sum=ary[j]+ary[i];
            if(sum%2==0 && sum>max)
                max=sum;
        }
    }
    printf("%d\n", max);
}