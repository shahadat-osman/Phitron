#include<stdio.h>
int main()
{
    int n, i, max, k, element, count=0;
    scanf("%d", &n);
    int ary[n];
    for(i=1; i<=n; i++)
    {
        scanf("%d", &ary[i]);
    }

    scanf("%d", &k);

    max=ary[1];
    for(i=1; i<=n; i++)
    {
        if(ary[i]>max)
            max=ary[i];
    }
    int alist[max];
    for(i=1; i<=max; i++)
    {
        alist[i]=0;
    }
    for(i=1; i<=n; i++)
    {
        alist[ary[i]]=ary[i];
    }
    for(i=1; i<=max; i++)
    {   
        if(count==k)
            break;
        if(alist[i]!=0)
            count++;
        element=i;
    }
    printf("%d\n", element);
}