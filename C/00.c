#include <stdio.h>
int main()
{
    int n, i, j, target, flag=0;
    scanf("%d", &n);
    int Alist[n];
    for(i=0; i<n; i++)
    {
       scanf("%d", &Alist[i]);
    }
    int max=Alist[0];
    for(i=0; i<n; i++)
    {
        if(Alist[i]>max)
            max=Alist[i];
    }
    int Blist[max];
    for(i=0; i<=max; i++)
    {
        Blist[i]=0;
    }
    for(i=0; i<n; i++)
    {
        Blist[Alist[i]]=1;
    }
    for(i=0; i<=max; i++)
    {
        if(Blist[i]==1)
            printf("%d ", i);
    }
}