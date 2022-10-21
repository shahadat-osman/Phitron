#include<stdio.h>
int main()
{
    int  height;
    printf("Enter height:\n");
    scanf("%d", &height);
    if(height<150)
    {
        printf("The person is Dwarf\n");
    }
    else if(height==150)
    {
        printf("The person is Average height.\n");
    }
    else if(height>=165)
    {
        printf("The person is Tall.\n");
    }
    return 0;
}