// Shahadat Osman
// Date: 28-01-2025
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int dp[n];

    for (int i = 0; i < n; i++)
        cin >> dp[i];

    int sum;
    cin >> sum;
    int memo[n + 1][sum + 1];

    memo[0][0] = 1;

    for (int i = 1; i <= sum; i++)
        memo[0][i] = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= sum; j++)
        {
            if (dp[i - 1] <= j)
                memo[i][j] = memo[i - 1][j - dp[i - 1]] + memo[i - 1][j];
            else
                memo[i][j] = memo[i - 1][j];
        }
    }

    cout << memo[n][sum] << endl;

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= sum; j++)
        {
            cout << memo[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
