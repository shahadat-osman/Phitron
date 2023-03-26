#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
    string name, fathers_name, mothers_name;
    int std_id, age;

public:
    void display()
    {
        cout << name << " " << std_id << " " << age << " " << fathers_name << " " << mothers_name << "\n";
    }
    void setInformatin(string s, int id, int ag)
    {
        name = s;
        std_id = id;
        age = ag;
    }

    Student(string name, int id, int ag, string f_name, string m_name) // constructor
    {
        this->name = name; // same variable object==function perameter
        std_id = id;
        age = ag;
        fathers_name = f_name;
        mothers_name = m_name;
    }
    Student(string s, int id, int ag) // multi constructor
    {
        name = s;
        std_id = id;
        age = ag;
    }

    Student() // empty constructor
    {
    }

};

bool comp(Student a, Student b)
{
    // when a is less than b
    return a.std_id < b.std_id;
}

int main()
{
    vector<Student> a;
    for (int i = 0; i < 10; i++)
    {
        a.push_back(Student("A", 20 - i, 20));
    }
    for (int i = 0; i < 10; i++)
    {
        a[i].display();
    }

    cout << "After Sorting\n";
    sort(a.begin(), a.end(), comp);
    for (int i = 0; i < 10; i++)
    {
        a[i].display();
    }
    return 0;
}