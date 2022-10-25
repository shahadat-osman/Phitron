#include<stdio.h>
int main()
{
    int a,b, opt;

    printf("Enter Two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Enter Option:\n'1' for Sum\n'2' for Sub\n'3' for Multi\n'4' for Div\n");
    scanf("%d", &opt);

    if(opt==1)
        printf("Result= %d", a+b);
    if(opt==2)
        printf("Result= %d", a-b);
    if(opt==3)
        printf("Result= %d", a*b);
    if(opt==4)
        printf("Result= %d", a/b);

    return 0;
}