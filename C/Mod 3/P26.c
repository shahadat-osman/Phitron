#include<stdio.h>
int main()
{
    int num1, num2, choice;

    printf("Press \"1\" for Addition.\nPress \"2\" for Substraction.\nPress \"3\" for Multiplication.\nPress \"4\" for Division.\n");
    scanf("%d", &choice);
    if(choice<1 || choice>4)
        printf("Wrong Choice!\n");

    else
    {
        printf("Enter two Numbers:\n");
        scanf("%d%d", &num1, &num2);

        switch(choice)
        {
            case 1:
            printf("The sum is %d + %d=%d", num1, num2, num1+num2);
            break;
            case 2:
            printf("The Substraction is %d - %d= %d", num1, num2, num1-num2);
            break;
            case 3:
            printf("The Multiplication is %d*%d = %d", num1, num2, num1*num2);
            break;
            case 4:
            printf("The substraction is %d/%d = %d", num1, num2, num1/num2);
            break;
        }
    }
    return 0;
}