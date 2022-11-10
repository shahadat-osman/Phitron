#include<stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int arra[N];
    for(int i=1; i<=N; i++)
    {
        scanf("%d", &arra[i]);
    }
    for(int i=N; i>0; i--)
    {
        printf("%d ", arra[i]);
    }
}