#include<stdio.h>
#include<math.h>

int main()
{
    int a, *pi;
    float b, *pd;
    char c;
    b=4.5;
    a=floor(b);
    pd= (float*)pi;
    b=(double)a/3;
    a=(int)b;
    printf("%d %f %p", a, b, pd);
}