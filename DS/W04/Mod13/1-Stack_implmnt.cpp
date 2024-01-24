// Shahadat Osman
// Date: 02-01-2024
#include <bits/stdc++.h>
using namespace std;

class myStack
{
public:
    vector<int> vect;

    void push(int value)
    {
        vect.push_back(value);
    }
    void pop()
    {
        vect.pop_back();
    }
    int top()
    {
        return vect.back();
    }
    int sizs()
    {
        return vect.size();
    }
    bool empty()
    {
        if (vect.size() == 0)
            return true;
        else
            return false;
    }
};

int main()
{
    myStack stck;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        stck.push(x);
    }
    while (!stck.empty())
    {
        cout << stck.top() << "\n";
        stck.pop();
    }

    return 0;
}