#include<stdio.h>
int main()
{
    int n=3, ary[n][n], sum=0, sum2=0, i, j, count=0;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d", &ary[i][j]);
        }
    }
    for(i=0; i<n; i++)
    {
        sum=0, sum2=0;
        for(j=0; j<n; j++)
        {
            sum+=ary[j][i];
        }
        for(j=0; j<n; j++)
        {
            sum2+=ary[i][j];
        }
        if(sum==sum2)
            count++;
    }
    if(count==n)
        printf("Yes\n");
    else 
        printf("No\n");
    return 0;
}