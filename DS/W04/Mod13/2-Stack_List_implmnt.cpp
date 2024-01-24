// Shahadat Osman
// Date: 02-01-2024
#include <bits/stdc++.h>
using namespace std;

class myStack
{
public:
    list<int> mlist;

    void push(int value)
    {
        mlist.push_back(value);
    }
    void pop()
    {
        mlist.pop_back();
    }
    int top()
    {
        return mlist.back();
    }
    int size()
    {
        return mlist.size();
    }
    bool empty()
    {
        if (mlist.empty())
            return true;
        else
            return false;
    }
};

int main()
{
    myStack st;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    while (!st.empty())
    {
        cout << st.top() << "\n";
        st.pop();
    }

    return 0;
}