// Shahadat Osman
//  Date: 22-01-2024
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    // t=1;
    while (t--)
    {
        int n;
        cin >> n;

        set<int> mySet;

        while (n--)
        {
            int x;
            cin >> x;
            mySet.insert(x);
        }
        for (auto it = mySet.begin(); it != mySet.end(); it++)
            cout << *it << " ";
        cout << "\n";
    }

    return 0;
}