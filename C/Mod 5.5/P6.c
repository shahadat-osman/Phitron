/* Write a C program to take two non-negative integers N and M. Here N and M represents time in hours (24 hours format).
You need to print from N to M, if you need to start from beginning again, you can do that. */
#include<stdio.h>
int main()
{
    int i, n, m;

    scanf("%d %d", &n, &m);
    
    if(n<m)
    {
        for(i=n; i<=m; i++)
        {
            printf("%d ", i);
        }
    }
    else
    {
        for(i=n; i<24; i++)
        {
            printf("%d ", i);
        }
        for(i=0; i<=m; i++)
        {
            printf("%d ", i);
        }
    }
    
    return 0;
}