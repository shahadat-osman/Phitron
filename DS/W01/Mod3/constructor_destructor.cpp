#include <bits/stdc++.h>

using namespace std;

class Student
{
private:
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

class Person // recursive class
{
public:
    string name;
    Person *father, *mother; //"pointer   -> not infite recursive" also dynamic object
                             // pointer main function e point korte hobe. as p.father = new person;{47 no line}

    Person()
    {
        father = NULL;
        mother = NULL;
    }
    Person(string name, string f_name, string m_name)
    {
        this->name = name;
        father = new Person;
        father->name = f_name;
        mother = new Person;
        mother->name = m_name;
    }

    void print_info()
    {
        cout << "name = " << name << "\n";
        cout << "Fathers name = " << father->name << "\n";
        cout << "Mothers name = " << mother->name << "\n";
    }
    ~Person()
    {
        cout << "Called\n";
        if (father != NULL)
            delete father;
        if (mother != NULL)
            delete mother;
    }
};

class User
{
protected:
    string name;
    int age;
};

class Admin : User
{
private:
    string designation;

public:
    void Set(string s, int ag, string dg)
    {
        name = s;
        age = ag;
        designation = dg;
    }
    void print()
    {
        cout << name << "\n";
        cout << age << "\n";
        cout << designation << "\n";
    }
};

int main()
{
    /* Student s, s2;
    s.name = "Shahadat";
    s.age = 24;
    s.std_id = 20101151;
    s.fathers_name = "Osman";
    s.mothers_name = "Akther";
    s.display(); */

    /* Student one;
    one.setInformatin("A", 10, 20);
    one.display(); */

    /* Admin ad;
    ad.Set("A", 20, "Boss");
    ad.print(); */

    /* Student s_three("B", 11, 27, "XY", "XX");
    s_three.display();

    Student s_four("B", 11, 27);
    s_four.display();

    Student s_five; */

    /*     Person p;
        p.father = new Person;
        p.mother = new Person;

        p.name = "A";
        p.father->name = "B";
        p.mother->name = "C";

        p.print_info(); */

    /* Person pq("T", "X", "Y");
    pq.print_info(); */

    Student *ptr = new Student("B", 201, 25);
    ptr->display();



    delete ptr;

    return 0;
}