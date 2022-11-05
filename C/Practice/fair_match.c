#include<stdio.h>
#include<math.h>
int main()
{
    int a, b, c, d;

    scanf("%d %d %d %d", &a, &b,&c, &d);

    if(a && b > c && d || c && d > a && b)
        printf("No\n");
    else
        printf("Yes\n");

}