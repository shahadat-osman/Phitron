#include<stdio.h>
int main()
{
    int ara[10], i;

    for(i=0; i<5; i++)
    {
        scanf("%d", &ara[i]);

    }
    for(i=4; i>=0; i--)
    {
        printf("%d-->%d ",i, ara[i]);
    }
    return 0;    
}
