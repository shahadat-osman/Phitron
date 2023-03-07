#include<stdio.h>
int count(int x, int y, int ary[])
{
    int i, counter=0;
    for(i=0; i<x; i++)
    {
        if(ary[i]!=y)
            counter++;
    }
    return counter;
}
int main()
{
    int n, i, ans, k;
    scanf("%d", &n);
    int ary[n];
    for(i=0; i<n; i++)
    {
        scanf("%d", &ary[i]);
    }
    scanf("%d", &k);

    ans= count(n, k, ary);
    printf("%d\n", ans);

    return 0;
}