// Shahadat Osman
// Date: 06-01-2024
#include <bits/stdc++.h>
using namespace std;

class myStack
{
public:
    list<int> st;
    int sz = 0;

    void push(int value)
    {
        st.push_back(value);
        sz++;
    }
    void pop()
    {
        st.pop_back();
        sz--;
    }
    int top()
    {
        return st.back();
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

class myQueue
{
public:
    list<int> que;
    int sz = 0;

    void push(int value)
    {
        que.push_back(value);
        sz++;
    }
    void pop()
    {
        que.pop_front();
        sz--;
    }
    int front()
    {
        return que.front();
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
    myStack s;
    myQueue q;

    int n, m, x, i;

    cin >> n >> m;
    for (i = 0; i < n; i++)
    {
        cin >> x;
        s.push(x);
    }

    for (i = 0; i < m; i++)
    {
        cin >> x;
        q.push(x);
    }

    if (n != m)
        cout << "NO\n";

    else
    {
        while (!s.empty())
        {
            if (s.top() != q.front())
            {
                cout << "NO\n";
                return 0;
            }
            s.pop();
            q.pop();
        }
        cout << "YES\n";
    }

    return 0;
}
