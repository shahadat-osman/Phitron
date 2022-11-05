#include<stdio.h>
int main()
{
    int i, a, n, h, width=0;
    scanf("%d %d", &n, &h);

    for(i=1; i<=n; i++)
    {
        scanf("%d", &a);
        if(a>h)
            width +=2;
        else
            width++;
    }
    printf("%d\n", width);

    return 0;
}