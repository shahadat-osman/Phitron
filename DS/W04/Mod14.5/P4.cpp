// Shahadat Osman
// Date: 05-01-2024
#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }

    stack<int> s;
    while (!q.empty())
    {
        s.push(q.front());
        q.pop();
    }

    queue<int> q2;
    while (!s.empty())
    {
        q2.push(s.top());
        s.pop();
    }

    while (!q2.empty())
    {
        cout << q2.front() << " ";
        q2.pop();
    }
    cout << "\n";

    return 0;
}