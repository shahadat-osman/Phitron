#include<stdio.h>
int main()
{
    int a, b, c, sum;

    scanf("%d %d %d", &a, &b, &c);
    if(a==b && b==c)
        sum=2*a;
    else if(a<b && a<c)
        sum=b+c;
    else if(b<a && b<c)
        sum=a+c;
    else if(c<a && c<b)
        sum=a+b;

    printf("%d\n", sum);
}