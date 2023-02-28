#include <stdio.h>
int odd_even(int x);

int main()
{
    int n;
    scanf("%d", &n);

    if(odd_even(n))
        printf("Even\n");
    else 
        printf("Odd\n");

    return 0;
}

int odd_even(int x)
{
    if(x%2==0)
        return 1;
    else
        return 0; 
}