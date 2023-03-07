#include<stdio.h>
char grade(int x);
int main()
{
    int marks;
    scanf("%d", &marks);
    
    printf("Grade is: %c\n", grade(marks));
}
char grade(int x)
{
    if(x>=80 && x<=100)
        return 'A';
    if(x>=60 && x<=79)
        return 'B';
    if(x>=40 && x<=59)
        return 'C';

    return 'F';
}