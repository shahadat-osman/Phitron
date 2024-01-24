// Shahadat Osman
#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int ID, marks;
    char name[100], Section;
};
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        Student s1, s2, s3;
        cin >> s1.ID;
        getchar();
        cin >> s1.name;
        getchar();
        cin >> s1.Section;
        cin >> s1.marks;
        cin >> s2.ID;
        getchar();
        cin >> s2.name;
        getchar();
        cin >> s2.Section;
        cin >> s2.marks;
        cin >> s3.ID;
        getchar();
        cin >> s3.name;
        getchar();
        cin >> s3.Section;
        cin >> s3.marks;

        if (s1.marks >= s2.marks && s1.marks>=s3.marks)
        {
            if(s1.marks>s2.marks && s1.marks>s3.marks)
                cout << s1.ID << " " << s1.name << " " << s1.Section << " " << s1.marks << "\n";
            else if (s1.marks == s2.marks && s1.ID<s2.ID)
            {
                cout << s1.ID << " " << s1.name << " " << s1.Section << " " << s1.marks << "\n";
            }
            else if (s1.marks == s2.marks && s1.ID>s2.ID)
            {
                cout << s2.ID << " " << s2.name << " " << s2.Section << " " << s2.marks << "\n";
            }

            else if (s1.marks == s3.marks && s1.ID<s3.ID)
            {
                cout << s1.ID << " " << s1.name << " " << s1.Section << " " << s1.marks << "\n";
            }
            else if (s1.marks == s3.marks && s1.ID>s3.ID)
            {
                cout << s3.ID << " " << s3.name << " " << s3.Section << " " << s3.marks << "\n";
            }
        }
        else if (s2.marks >= s1.marks && s2.marks>=s3.marks)
        {
            if(s2.marks>s1.marks && s2.marks>s3.marks)
                cout << s2.ID << " " << s2.name << " " << s2.Section << " " << s2.marks << "\n";
            else if (s1.marks == s2.marks && s2.ID<s1.ID)
            {
                cout << s2.ID << " " << s2.name << " " << s2.Section << " " << s2.marks << "\n";
            }
            else if (s1.marks == s2.marks && s2.ID>s1.ID)
            {
                cout << s1.ID << " " << s1.name << " " << s1.Section << " " << s1.marks << "\n";
            }

            else if (s2.marks == s3.marks && s2.ID<s3.ID)
            {
                cout << s2.ID << " " << s2.name << " " << s2.Section << " " << s2.marks << "\n";
            }
            else if (s2.marks == s3.marks && s2.ID>s3.ID)
            {
                cout << s3.ID << " " << s3.name << " " << s3.Section << " " << s3.marks << "\n";
            }
        }
        else if (s3.marks >= s1.marks && s3.marks>=s2.marks)
        {
            if(s3.marks>s1.marks && s3.marks>s2.marks)
                cout << s3.ID << " " << s3.name << " " << s3.Section << " " << s3.marks << "\n";
            else if (s3.marks == s1.marks && s3.ID<s1.ID)
            {
                cout << s3.ID << " " << s3.name << " " << s3.Section << " " << s3.marks << "\n";
            }
            else if (s3.marks == s1.marks && s3.ID>s1.ID)
            {
                cout << s1.ID << " " << s1.name << " " << s1.Section << " " << s1.marks << "\n";
            }

            else if (s2.marks == s3.marks && s2.ID>s3.ID)
            {
                cout << s3.ID << " " << s3.name << " " << s3.Section << " " << s3.marks << "\n";
            }
            else if (s2.marks == s3.marks && s2.ID<s3.ID)
            {
                cout << s2.ID << " " << s2.name << " " << s2.Section << " " << s2.marks << "\n";
            }
        }
    }
    return 0;
}