// Shahadat Osman
// Date: 24-01-2024
#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll, marks;
    Student(string name, int roll, int marks)
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};

class mySort
{
public:
    bool operator()(Student x, Student y)
    {
        if (x.marks < y.marks)
            return true;
        else if (x.marks == y.marks && x.roll > y.roll)
            return true;
        else
            return false;
    }
};

int main()
{
    int n;
    cin >> n;

    priority_queue<Student, vector<Student>, mySort> myPQ;
    for (int i = 0; i < n; i++)
    {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        Student person(name, roll, marks);
        myPQ.push(person);
    }

    int queries;
    cin >> queries;
    while (queries--)
    {
        int cmnd;
        cin >> cmnd;
        if (cmnd == 0)
        {
            string name;
            int roll, marks;
            cin >> name >> roll >> marks;
            Student p(name, roll, marks);
            myPQ.push(p);
            cout << myPQ.top().name << " " << myPQ.top().roll << " " << myPQ.top().marks << "\n";
        }
        else if (cmnd == 1)
        {
            if (myPQ.empty())
                cout << "Empty\n";
            else
                cout << myPQ.top().name << " " << myPQ.top().roll << " " << myPQ.top().marks << "\n";
        }
        else if (cmnd == 2)
        {
            if (!myPQ.empty())
                myPQ.pop();
            if (myPQ.empty())
                cout << "Empty\n";
            else
                cout << myPQ.top().name << " " << myPQ.top().roll << " " << myPQ.top().marks << "\n";
        }
    }

    return 0;
}