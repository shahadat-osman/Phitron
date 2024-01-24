// Shahadat Osman
// Date: 23-01-2024
#include <bits/stdc++.h>
using namespace std;

class myClass
{
public:
    string name;
    long long x;
    myClass(string name, long long x)
    {
        this->name = name;
        this->x = x;
    }
};

class mySort
{
public:
    bool operator()(myClass p, myClass q)
    {
        if (p.name > q.name)
            return true;
        else if (p.name == q.name && p.x < q.x)
            return true;
        else
            return false;
    }
};

int main()
{
    int n;

    cin >> n;
    priority_queue<myClass, vector<myClass>, mySort> myQueue;
    for (int i = 0; i < n; i++)
    {
        string name;
        int a;
        cin >> name >> a;
        myClass nums(name, a);
        myQueue.push(nums);
    }
    while (!myQueue.empty())
    {
        cout << myQueue.top().name << " " << myQueue.top().x << "\n";
        myQueue.pop();
    }

    return 0;
}