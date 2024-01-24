// Shahadat Osman
// Date: 05-01-2024
#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> s;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.push(x);
    }

    stack<int> copy_s;

    while (!s.empty())
    {
        copy_s.push(s.top());
        s.pop();
    }

    while (!copy_s.empty())
    {
        cout << copy_s.top() << " ";
        copy_s.pop();
    }

    return 0;
}