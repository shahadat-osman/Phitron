#include<bits/stdc++.h>

using namespace std;

class Student 
{
  private:
    string name, fathers_name, mothers_name;
    int std_id, age;

  public:
    void display()
    {
        cout<<name<<" "<<std_id<<" "<<age<<" "<<fathers_name<<" "<<mothers_name<<"\n";
    }
    void setInformatin(string s, int id, int ag)
    {
        name = s;
        std_id = id;
        age = ag;
    }
};

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

class User
{
  protected:
    string name;
    int age;
};
class Admin: User
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
        cout<<name<<"\n";
        cout<<age<<"\n";
        cout<<designation<<"\n";
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

    Admin ad;
    ad.Set("A", 20, "Boss");
    ad.print();


/*     Person p;
    p.father = new Person;
    p.mother = new Person;

    p.name = "A";
    p.father->name = "B";
    p.mother->name = "C";

    p.print_info(); */


    return 0;
}