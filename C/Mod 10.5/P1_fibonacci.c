#include<stdio.h>
int main()
{
    int n, i, f=0, s=1, t;
    scanf("%d", &n);
    int seq[n];
    for(i=0; i<n; i++)
    {
        seq[i]=i;
    }
    for(i=0; i<n; i++)
    {
        seq[i+2]=seq[i]+seq[i+1];
    }
    for(i=0; i<n; i++)
    {
        printf("%d ", seq[i]);
    }
}