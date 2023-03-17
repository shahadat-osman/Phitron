#include<stdio.h>

struct Student
{
    int roll;
    int  age;
    float weight;
};

int main()
{
    struct Student s;                               // user input
    scanf("%d %d %f", &s.age, &s.roll, &s.weight);
    printf("%d %d %.2f\n", s.roll, s.age, s.weight);

    struct Student s2={3, 25, 56.4};                    //initialize on declaration
    printf("%d %d %.2f\n", s2.roll, s2.age, s2.weight);

    struct Student s3;                                  //initialize after declaration calling member of structure
    s3.age = 23, s3.roll = 4, s3.weight = 50.8;
    printf("%d %d %.2f\n", s3.roll, s3.age, s3.weight);

    struct Student s4={.weight = 55.6, .roll = 5, .age = 22};   //designated initialize
    printf("%d %d %.2f\n", s4.roll, s4.age, s4.weight);

    return 0;
}