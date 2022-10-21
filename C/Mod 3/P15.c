#include<stdio.h>
int main()
{
    int a1, a2, a3;
    printf("Enter 3 angle:\n");
    scanf("%d%d%d", &a1, &a2, &a3);
    if(a1+a2+a3==180)
        printf("The triangle is Valid.\n");
    else
        printf("The triangle is not Valid.\n");
    return 0;
}