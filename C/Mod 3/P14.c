#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter 3 inputs:\n");
    scanf("%d%d%d", &a, &b, &c);
    if(a>0 && b>0 && c>0)
    {
        if(a==b && b==c && c==a)
        {
            printf("This is an Equilateral Triangle.\n");
        }
        else if(a==b || b==c || a==c)
        {
            printf("This is an isosceles Triangle.\n");
        }
        else
        {
            printf("This is a Scalene Triangle.\n");
        }
    }
    else
    {
        printf("This is not a Triangle.\n");
    }
    return 0;
}