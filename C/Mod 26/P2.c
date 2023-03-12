#include<stdio.h>
void find_max_min(int n, int ary[], int *max, int *min)
{
    int i;
    *max=ary[0];
    *min=ary[0];

    for(i=0; i<n; i++)
    {
        if(ary[i]> *max)
            *max=ary[i];
        
        if(ary[i]< *min)
            *min=ary[i];
    }
}
int main()
{
    int i, n, maxx, minn;
    scanf("%d", &n);
    int ary[n];
    for(i=0; i<n; i++)
        scanf("%d", &ary[i]);
        
    find_max_min(n, ary, &maxx, &minn);

    printf("%d %d\n", maxx, minn);

    return 0;
}