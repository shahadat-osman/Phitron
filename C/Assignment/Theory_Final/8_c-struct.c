#include <stdio.h>
struct Person
{
    int number, marks;
    char name[50];
};
int main()
{
    struct Person P1;

    printf("Enter information:\n");

    printf("Enter name: ");
    scanf("%s", P1.name);
    getchar();

    printf("Enter roll number: ");
    scanf("%d", &P1.number);

    printf("Enter marks: ");
    scanf("%d", &P1.marks);

    printf("Displaying Information:\n");
    printf("Name: %s\nRoll number: %d\nMarks: %d\n", P1.name, P1.number, P1.marks);

    return 0;
}