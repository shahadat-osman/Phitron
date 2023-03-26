#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int a, b, ans;
    string S;
    getline(cin, S);

    a = S[0] - 48;
    b = S[2] - 48;
    ans = a * b;

    cout << ans << "\n";

    return 0;
}