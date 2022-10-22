#include<stdio.h>
int main()
{
    char grade;
    printf("Input the Grade: ");
    scanf("%c", &grade);

    if(grade=='E')
    {
        printf("You have chosen : Excellent\n");
    }
    else if(grade=='V')
    {
        printf("You have chosen : Very Good\n");
    }
    else if(grade=='G')
    {
        printf("You have chosen : Good\n");
    }
    else if(grade=='A')
    {
        printf("You have chosen : Average\n");
    }
    else if(grade=='F')
    {
        printf("You have chosen : Fail\n");
    }
    else
    {
        printf("Wrong Input\n");
    }
    return 0;
}