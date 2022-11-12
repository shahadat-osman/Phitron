#include<stdio.h>
int main()
{
    int n, i, j, flag=0;
    scanf("%d", &n);
    int cons[3];

    for(i=0; i<n; i++)
    {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        if(a+b+c>=2)
        flag++;
    }
    printf("%d\n", flag);
}