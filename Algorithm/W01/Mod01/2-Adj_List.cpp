// Shahadat Osman
// Date: 25-01-2024
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;
    
    vector<int> vect[n];

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        vect[a].push_back(b);
        vect[b].push_back(a);
    }

    for (int i = 0; i < n; i++)
    {
        for (auto x : vect[i])
            cout << x << " ";
        cout << "\n";
    }

    return 0;
}