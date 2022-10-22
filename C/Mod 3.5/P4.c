#include<stdio.h>
int main()
{
    int marks;

    scanf("%d", &marks);
    if(marks>=80 && marks<=100)
    {
        printf("A+");
    }
    else if(marks>=70 && marks<80)
    {
        printf("A");
    }
    else if(marks>=60 && marks<70)
    {
        printf("A-");
    }
    else if(marks>=50 && marks<60)
    {
        printf("B");
    }
    else if(marks>=40 && marks<50)
    {
        printf("C");
    }
    else if(marks>=33 && marks<40)
    {
        printf("D");
    }
    else if(marks<33)
    {
        printf("F");
    }
    else 
    {
        printf("Wrong Input.\n");
    }
    return 0;
}