// Shahadat Osman
// Date: 01-03-2024
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e, Q;
    cin >> n >> e;

    vector<int> v[1005];

    while (e--)
    {
        int x, y;
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    cin >> Q;

    while (Q--)
    {
        int a;
        cin >> a;
        if (v[a].empty())
            cout << "-1\n";
        else
        {
            sort(v[a].begin(), v[a].end(), greater<int>());
            for (int p : v[a])
                cout << p << " ";
            cout << "\n";
        }
    }

    return 0;
}