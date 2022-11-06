#include<stdio.h>
int main()
{
    int n, k, i, j, room=0;
    scanf("%d %d", &n, &k);

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=k; j++)
        room+=(i*100)+j;
    }
    printf("%d\n", room);
}