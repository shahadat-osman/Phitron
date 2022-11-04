#include<stdio.h>
int main()
{
    int n, step;
    scanf("%d", &n);
    if(n%5==0)
    {
        step=n/5;
    }
    else 
    {
        step=(n/5)+1;
    }

    printf("%d", step);
    return 0;
}