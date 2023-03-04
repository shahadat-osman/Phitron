#include<stdio.h>
int main()
{
    int n, k, i, j;
    scanf("%d %d", &n, &k);
    
    int ary[n];

    for(i=1, j=1; i<=n; i++)
    {
        if(i%2==0)
        {
            ary[j]=i;
            j++;
        }
    }
    for(i=1; i<=n; i++)
    {
        if(i%2!=0)
        {
            ary[j]=i;
            j++;
        }
    }
    for(i=1; i<=n; i++)
    {
        printf("%d ", ary[i]);
    }
    printf("\nThe %dth element in this sequence is %d\n", k, ary[k]);

    return 0;
}