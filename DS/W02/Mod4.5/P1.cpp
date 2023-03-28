#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, n, sum = 0;
    cin >> n;
    vector<int> a(n);
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    cout << sum << endl;

    return 0;
}