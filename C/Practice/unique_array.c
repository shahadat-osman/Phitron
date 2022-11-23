#include<stdio.h>
int main()
{
    int n, i, j, flag, select, index;
    scanf("%d", &n);
    int ary[n], nary[n];
    for(i=1; i<=n; i++)
    {
        scanf("%d", &ary[i]);
    }
    index=1;
    for(i=1; i<=n; i++)
    {
        flag=0;
        nary[i]=0;
        select=ary[i];
        for(j=1; j<=i ;j++)
        {
            if(nary[j]==select)
                flag=1;
            continue;
        }
        if(flag==0)
        {
            nary[index]=select;
            index++;
        }
    }
    for(i=1; i<index; i++)
    {
        printf("%d ", nary[i]);
    }
}