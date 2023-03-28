#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, n, ans = 1;
    cin >> n;
    vector<int> a(n);
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        ans *= a[i];
    }
    cout << ans << endl;

    return 0;
}