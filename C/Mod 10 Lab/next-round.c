#include<stdio.h>
int main()
{
    int n, k, i, count=0;
    scanf("%d %d", &n, &k);
    int score[55];
    for(i=1; i<=n; i++)
    {
        scanf("%d", &score[i]);
    }
    for(i=1; i<=n; i++)
    {
        if(score[i]>=score[k] && score[i]>0)
            count++;
    }
    printf("%d\n", count);
}