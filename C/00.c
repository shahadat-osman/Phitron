#include<stdio.h>
int main()
{
    int n=16;

    while(n!=1)
    {
        if(n%2==0)
        {n=n/2;}
        else
        {n=(n*3)+1;}

        printf("%d\n", n);
    }
    return 0;
}