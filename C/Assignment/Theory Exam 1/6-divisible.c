#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);

    if(a%b==0)
    {
        printf("The first number is divisible by the second number.\n");
    }
    else if(b%a==0)
    {
        printf("The second number is divisible by the first number.\n");
    }
    else
    {
        printf("None of them are divisible by the other.\n");
    }

    return 0;
}