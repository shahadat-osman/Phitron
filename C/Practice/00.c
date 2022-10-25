#include<stdio.h>
int main()
{
    int a,b;
    
    printf("Enter Two numbers: ");
    scanf("%d", &a);
    scanf("%d", &b);

    printf("Sum= %d\n", a+b);
    printf("Sub= %d\n", a-b);
    printf("Multi= %d\n", a*b);
    printf("Div= %d\n", a/b);
    
    return 0;    
}
