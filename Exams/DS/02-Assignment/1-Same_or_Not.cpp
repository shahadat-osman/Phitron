// Shahadat Osman
// Date: 06-01-2024
#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> s;
    queue<int> q;

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
