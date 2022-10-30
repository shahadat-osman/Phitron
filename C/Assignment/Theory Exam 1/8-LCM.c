#include<stdio.h>
int main()
{
    int x, y, i, lcm, gcd;

    scanf("%d %d", &x, &y);

    for(i=2; i<=y || i<=x; i++)
    {
        if(x%i==0 && y%i==0)
        {
            gcd=i;
        }
        else
        {
            gcd=1;
        }
    }
    lcm=(x*y)/gcd;
    printf("The LCM of %d and %d is %d.\n",x, y, lcm);

    return 0;
}