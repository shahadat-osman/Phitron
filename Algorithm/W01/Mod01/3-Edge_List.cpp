// Shahadat Osman
// Date: 25-01-2024
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;

    vector<pair<int, int>> vect;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        vect.push_back(make_pair(a, b));
    }

    for (pair<int, int> x : vect)
        cout << x.first << " " << x.second << "\n";

    return 0;
}