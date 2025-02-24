// Shahadat Osman
// Date: 28-01-2025
#include <bits/stdc++.h>
using namespace std;

int memo[1005][1005];

bool dp(int a[], int n, int sum)
{
    if (n < 0)
    {
        if (sum == 0)
            return true;
        else
            return false;
    }

    if (memo[n][sum] != -1)
        return memo[n][sum];

    if (a[n] <= sum)
    {
        bool op1 = dp(a, n - 1, sum - a[n]);
        bool op2 = dp(a, n - 1, sum);

        return memo[n][sum] = op1 || op2;
    }
    else
    {
        bool op2 = dp(a, n - 1, sum);

        return memo[n][sum] = op2;
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int sum;
    cin >> sum;

    for (int i = 0; i < n; i++)
        for (int j = 0; j <= sum; j++)
            memo[i][j] = -1;

    if (dp(a, n - 1, sum))
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}
