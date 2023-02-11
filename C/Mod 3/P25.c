#include<stdio.h>
int main()
{
    int choice, a, b;
    printf("Input '1' for Circle Area\n");
    printf("Input '2' for Rectangle Area\n");
    printf("Input '3' for Triangle Area\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
        printf("Input radius: ");
        scanf("%d", &a);
        printf("Circle Area: %.2f unit square\n", 3.1416*a*a);
        break;

        case 2:
        printf("Input Base & Height:\n");
        scanf("%d%d", &a, &b);
        printf("Rectangle Area: %d unit square\n", a*b);
        break;

        case 3:
        printf("Input Base & Height:\n");
        scanf("%d%d", &a, &b);
        printf("Triangle Area: %.2f unit square\n", .5*a*b);
        break;

        default:
        printf("Wrong Input.\n");
    }
    return 0;
}