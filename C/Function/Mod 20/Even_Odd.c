#include<stdio.h>
int even_odd(int n)
{
    if(n%2==0)
        return 1;
    else
        return 0;
}
int main()
{
    int number;
    scanf("%d", &number);

    int check=even_odd(number);
    
    if(check==1)
        printf("%d is a Even number\n", number);
    else 
        printf("%d is a Odd number\n", number);

    return 0;
}