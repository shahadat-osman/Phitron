#include<stdio.h>
int main()
{
    int x, i;

    scanf("%d", &x);
    printf("The factors of %d are: %d", x, x/x);

    for(i=2; i<=x; i++)
    {
        if(x%i==0)
        {
            printf(", %d", i);
        }
    }
    printf(".\n");

    return 0;
}