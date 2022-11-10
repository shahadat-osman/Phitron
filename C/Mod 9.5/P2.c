#include<stdio.h>
int main()
{
    int N, i, Q, x, ind;
    scanf("%d", &N);
    int ary[N];
    for(i=0; i<N; i++)
    {
        scanf("%d", &ary[i]);
    }
    scanf("%d", &Q);
    for(i=0; i<Q; i++)
    {
        scanf("%d", &ind);
        scanf("%d", &x);
        ary[ind]+=x;
    }
    for(i=0; i<N; i++)
    {
        printf("%d ", ary[i]);
    }
}