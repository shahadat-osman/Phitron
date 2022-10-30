#include<stdio.h>
int main()
{
    int x, y, i, gcd;

    scanf("%d %d", &x, &y);

    for(i=2; i<=y || i<=x; i++)
    {
        if(x%i==0 && y%i==0)
        {
            gcd=i;
        }
    }
    printf("The GCD of %d and %d is %d.\n",x, y, gcd);

    return 0;
}