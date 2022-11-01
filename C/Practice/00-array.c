#include<stdio.h>
int main()
{
    int N=4;
    int ary[N];
    int i;

    for(i=0; i<N; i++)
    {
        scanf("%d", &ary[i]);
    }
    int m=ary[0];
    int sm;

    for(i=0; i<N; i++)
    {
        if(ary[i]<m)
        sm=m;
        
        //sm=m;
        
    }
    printf("Min Value is %d", sm);

    return 0;
}