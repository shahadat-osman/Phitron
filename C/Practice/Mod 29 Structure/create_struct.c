#include<stdio.h>

struct Student
{
    int roll;
    int  age;
    float weight;
};

int main()
{
    struct Student s;
    s.roll = 12;
    s.age = 25;
    s.weight = 76.2;

    printf("%d %d %.2f\n", s.roll, s.age, s.weight);

    return 0;
}