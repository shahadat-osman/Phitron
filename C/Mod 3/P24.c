#include<stdio.h>
int main()
{
    int Month;

    printf("Enter Month Number: ");
    scanf("%d", &Month);

    if(Month==1)
    {
        printf("January have 31 days.\n");
    }
    else if(Month==2)
    {
        printf("February have 30 days.\n");
    }
    else if(Month==3)
    {
        printf("March have 31 days.\n");
    }
    else if(Month==4)
    {
        printf("April have 30 days.\n");
    }
    else if(Month==5)
    {
        printf("May have 31 days.\n");
    }
    else if(Month==6)
    {
        printf("June have 30 days.\n");
    }
    else if(Month==7)
    {
        printf("July have 31 days.\n");
    }
    else if(Month==8)
    {
        printf("August have 31 days.\n");
    }
    else if(Month==9)
    {
        printf("September have 30 days.\n");
    }
    else if(Month==10)
    {
        printf("October have 31 days.\n");
    }
    else if(Month==11)
    {
        printf("November have 30 days.\n");
    }
    else if(Month==12)
    {
        printf("December have 31 days.\n");
    }
    else
    {
        printf("Wrong Input\n");
    }
    return 0;
}