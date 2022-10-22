#include<stdio.h>
int main()
{
    int Month;

    printf("Enter Month Number: ");
    scanf("%d", &Month);

    if(Month==1)
    {
        printf("January\n");
    }
    else if(Month==2)
    {
        printf("February\n");
    }
    else if(Month==3)
    {
        printf("March\n");
    }
    else if(Month==4)
    {
        printf("April\n");
    }
    else if(Month==5)
    {
        printf("May\n");
    }
    else if(Month==6)
    {
        printf("June\n");
    }
    else if(Month==7)
    {
        printf("July\n");
    }
    else if(Month==8)
    {
        printf("August\n");
    }
    else if(Month==9)
    {
        printf("September\n");
    }
    else if(Month==10)
    {
        printf("October\n");
    }
    else if(Month==11)
    {
        printf("November\n");
    }
    else if(Month==12)
    {
        printf("December\n");
    }
    else
    {
        printf("Wrong Input\n");
    }
    return 0;
}