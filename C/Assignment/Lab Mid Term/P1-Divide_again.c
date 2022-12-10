#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    if(n%3==0 && n>=3)
        printf("%d\n", n/3);
    else 
        printf("-1\n");

    return 0;
}