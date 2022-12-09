#include<stdio.h>
int main()
{
    int a,b;
    char ch;
    ch=getchar();
    scanf("%d %d", &a, &b);

    switch (ch)
    {
        case '+':
        {
            printf("%d\n", a+b);
            break;
        }
        case '-':
        {
            printf("%d\n", a-b);
            break;
        }
        case '*':
        {
            printf("%d\n", a*b);
            break;
        }
        case '/':
        {
            printf("%d\n", a/b);
            break;
        }
    
        default:
        {
            printf("Wrong Input\n");
        }
    }

    return 0;
}