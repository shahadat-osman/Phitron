#include<stdio.h>
int main()
{
    int roll, phy, chem, comp_app, total, division;
    float percentage;
    char name[20], div[10];

    printf("Input the Roll Number of the student: ");
    scanf("%d", &roll);
    
    printf("Input the name of the Student: ");
    scanf("%s", name);
    
    printf("Input the marks of Physics, Chemistry & Computer Application: ");
    scanf("%d%d%d", &phy, &chem, &comp_app);

    printf("Roll No: %d\n", roll);
    printf("Name of Student: %s\n", name);
    printf("Marks in Physics: %d\n", phy);
    printf("Marks in Chemistry: %d\n", chem);
    printf("Marks in Computer Application: %d\n", comp_app);

    total=phy+chem+comp_app;
    printf("Total Marks: %d\n", total);

    percentage=total/3.0;
    printf("Percentage: %.2f\n", percentage);

    if(percentage>=80)
    printf("Division = First\n");
    else if(percentage>=70)
    printf("Division = Second");
    else if(percentage>=60)
    printf("Division = Third");
    else if(percentage<=59)
    printf("Division = Fail");

    return 0;
}