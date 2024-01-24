#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;
    Student(int roll, int cls, double gpa)
    {
        this->roll = roll;  //(*this).roll = roll
        this->cls = cls;
        this->gpa = gpa;
    }
};

Student* func()
{
    Student* Abdullah = new Student(32,12, 4.55);

    return Abdullah;
}

int main()
{
    Student* Abdullah = func();
    cout<<Abdullah->roll<<" "<<Abdullah->cls<<" "<<Abdullah->gpa<<"\n";

    delete Abdullah;

    return 0;
}