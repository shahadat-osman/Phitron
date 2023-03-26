#include<bits/stdc++.h>

using namespace std;

/* class Student 
{
  public:
    string name;
    int std_id;
    int age;
    string fathers_name;
    string mothers_name;

    void display()
    {
        cout<<name<<" "<<std_id<<" "<<age<<" "<<fathers_name<<" "<<mothers_name<<"\n";
    }
}; */

class Person // recursive class
{
  public:
    string name;
    Person *father, *mother;        //"pointer   -> not infite recursive"
                                    // pointer main function e point korte hobe. as p.father = new person;{47 no line}

    void print_info()
    {
        cout<<"name = "<<name<<"\n";
        cout<<"Fathers name = "<<father->name<<"\n";
        cout<<"Fathers name = "<<mother->name<<"\n";
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

    Person p;
    p.father = new Person;
    p.mother = new Person;

    p.name = "A";
    p.father->name = "B";
    p.mother->name = "C";

    p.print_info();
    return 0;
}