#include<stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    int ary[n];
    for(i=1; i<=n; i++)
    {
        scanf("%d", &ary[i]);
    }
    //calculate max number of ary[]
    int max=ary[1];
    for(i=1; i<=n; i++)
    {
        if(ary[i]>max)
            max=ary[i];
    }
    //create new array[max+1] and assign 0 in all index of that array.
    int sort[max];
    for(i=1; i<=max; i++)
    {
        sort[i]=0;
    }
    //assign 1 in sort[] index where ary[] values placed.
    for(i=1; i<=n; i++)
    {
        sort[ary[i]]+=1;
    }
    //print the position of sort[] and this is the ascending order of ary[] values.
    for(i=1; i<=max; i++)
    {
        if(sort[i]==1)
            printf("%d ", i);
    }
}