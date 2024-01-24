#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> s;
    queue<int> q;

    int n, m, x;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        s.push(x);
    }

    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> x;
        q.push(x);
    }

    if (s.size() != q.size())
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
}