#include<stdio.h>
int main()
{
    int i=1,n,w, sum=0;
    scanf("%d", &n);

    while(i<=n)
    {
        scanf("%d", &w);
        sum+=w;
        i++;
    }
    printf("%d\n", sum);
    return 0;
}