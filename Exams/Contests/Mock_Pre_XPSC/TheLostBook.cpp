#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int target;
    cin >> target;
    int ans;
    bool found = false;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == target)
        {
            found = true;
            ans = i;
        }
    }
    if (found)
        cout << ans << "\n";
    else
        cout << "-1\n";
    return 0;
}