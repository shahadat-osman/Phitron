#include<stdio.h>
struct cls
{
    int marks;
    char name[30];
    int roll;
};
int main()
{
    struct cls student[5];
    int i;
    for(i=0; i<5; i++)
    {
        scanf("%d", &student[i].roll);
        scanf("%s", student[i].name);
        scanf("%d", &student[i].marks);
    }
    for(i=0; i<5; i++)
    {
        printf("Roll -> %d\n", student[i].roll);
        printf("Name -> %s\n", student[i].name);
        printf("Marks -> %d\n\n", student[i].marks);
    }

    return 0;
}
