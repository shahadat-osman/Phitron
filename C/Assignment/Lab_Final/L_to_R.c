#include<stdio.h>
int is_prime(int n);
int main()
{
    int t, l, r;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d %d", &l, &r);
        for(int i=l; i<=r; i++)
        {
            if(is_prime(i))
                printf("%d ", i);
        }
        printf("\n");
    }
}
int is_prime(int n)
{
    int i;
    if(n==2 || n==1)
        return 1;
    for(i=2; i<n; i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}