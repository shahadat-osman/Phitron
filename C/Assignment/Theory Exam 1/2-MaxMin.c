#include<stdio.h>
int main()
{
    int a, b, c, d, L, S;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    if(a>b && a>c && a>d)
    {
        L=a;
        if(!(a>b && a>c && a>d))
            S=a;
    }
    else if(b>a && b>c && b>d)
    {
        L=b;
        if(!(b>a && b>c && b>d))
            S=b;
    }
    else if(c>a && c>b && c>d)
    {
        L=c;
        if(!(c>a && c>b && c>d))
            S=c;
    }
    else if(d>a && d>b && d>c)
    {
        L=d;
        if(!(d>a && d>b && d>c))
            S=d;
    }
    printf("Largest = %d \n", L);
    printf("Smallest = %d \n", S);

    return 0;
}

    