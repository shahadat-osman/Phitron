// Shahadat Osman
// Date: 01-03-2024
#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 5;
int arr[N][N];

int main()
{
    int n, e, Q;
    cin >> n >> e;

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
        {
            arr[i][j] = 0;
            if (i == j)
                arr[i][j] = 1;
        }

    while (e--)
    {
        int x, y;
        cin >> x >> y;

        arr[x][y] = 1;
    }

    cin >> Q;
    while (Q--)
    {
        int a, b;
        cin >> a >> b;
        if (arr[a][b] == 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}