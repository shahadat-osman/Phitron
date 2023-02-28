#include <stdio.h>
int is_prime(int x);

int main()
{
    int n;
    scanf("%d", &n);

    if(is_prime(n))
        printf("%d is Prime\n", n);
    else 
        printf("%d is Composite\n", n);
    
    return 0;
}
int is_prime(int x)
{
    int i;

    if(x==1)
        return 0;
    else if(x==2)
        return 1;
    else
    {
        for(i=2; i<x; i++)
        {
            if(x%i==0)
                return 0;
        }
    }

    return 1;
}