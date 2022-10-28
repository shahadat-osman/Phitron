#include<stdio.h>
int main()
{
    int a, b;
    char choice;

    scanf("%d %c %d", &a, &choice, &b);

    switch(choice)
    {
        case '+':
            printf("%d\n", a+b);
            break;
        case '-':
            printf("%d\n", a-b);
            break;
        case '*':
            printf("%d\n", a*b);
            break;
        case '/':
            printf("%d\n", a/b);
            break;
        case '%':
            printf("%d\n", a%b);
            break;
    }
    return 0;
}