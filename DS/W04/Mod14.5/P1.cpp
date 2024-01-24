#include <bits/stdc++.h>
using namespace std;

class myStack
{
public:
    list<int> l;
    int sz = 0;
    void push(int value)
    {
        sz++;
        l.push_back(value);
    }
    void pop()
    {
        sz--;
        l.pop_back();
    }
    int top()
    {
        return l.back();
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        if (sz == 0)
            return true;
        else
            return false;
    }
};

int main()
{
    myStack st1, st2;

    int n, m, x;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        st1.push(x);
    }

    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> x;
        st2.push(x);
    }

    if (st1.size() != st2.size())
        cout << "NO\n";
    else
    {
        while (!st1.empty())
        {
            if (st1.top() != st2.top())
            {
                cout << "NO\n";
                return 0;
            }
            st1.pop();
            st2.pop();
        }
        cout << "YES\n";
    }

    return 0;
}