#include<stdio.h>
int main()
{
    int n=1235623, sum=0;
    while(n!=0)
    {
        sum+=n%10;
        n/=10;
    }
    printf("%d\n", sum);
}