#include<stdio.h>
int main()
{
    int n, i, j, sum=0;
    scanf("%d", &n);
    int ary[n];
    for(i=0; i<n; i++)
    {
        scanf("%d", &ary[i]);
    }
    for(i=0; i<n; i++)
    {
        sum+=ary[i]%10;
    }
    printf("Sum = %d\n", sum);
}