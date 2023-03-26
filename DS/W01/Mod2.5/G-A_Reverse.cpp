#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int L, R, temp, i;
    string S;

    cin >> L >> R;
    cin.ignore();
    getline(cin, S);

    int len = (R - L) / 2;
    for (i = L - 1; i < L + len; i++)
    {
        R--;
        temp = S[i];
        S[i] = S[R];
        S[R] = temp;
    }

    cout << S << "\n";

    return 0;
}