// Shahadat Osman
// Date: 29-11-2024
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;
    ll dis[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            dis[i][j] = INT_MAX;
            if (i == j)
                dis[i][j] = 0;
        }
    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        dis[a][b] = c;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (dis[i][j] == INT_MAX)
                cout << "# ";
            else
                cout << dis[i][j] << " ";
        }
        cout << "\n";
    }

    for (int k = 0; k < n; k++)
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                if (dis[i][k] + dis[k][j] < dis[i][j])
                    dis[i][j] = dis[i][k] + dis[k][j];

    bool cycle = false;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                if (dis[i][j] < 0)
                {
                    cycle = true;
                    break;
                }
            }
        }

    if (cycle)
        cout << "Negative Cycle\n";
    else
    {
        cout << "\n";
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (dis[i][j] == INT_MAX)
                    cout << "# ";
                else
                    cout << dis[i][j] << " ";
            }
            cout << "\n";
        }
    }

    return 0;
}
