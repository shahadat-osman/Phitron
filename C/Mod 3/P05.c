#include <stdio.h>
int main()
{
    int age;
    printf("Enter Age:\n");
    scanf("%d", &age);

    if (age >= 18)
        printf("Congratulation! You are eligible for casting your vote.\n");
    else
        printf("Sorry! You aren't eligible for casting your vote.\n");

    return 0;
}