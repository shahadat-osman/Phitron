#include<stdio.h>
int main()
{
    int t, n;
    scanf("%d", &t);

    while(t--)
    {
        scanf("%d", &n);
        while(n!=0)
        {
            printf("%c", (n%10)+64);
            n/=10;
        }
        printf("\n");
    }
}