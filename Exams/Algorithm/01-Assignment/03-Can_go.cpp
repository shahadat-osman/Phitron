// Shahadat Osman
// Date: 02-03-2024
#include <bits/stdc++.h>
using namespace std;

const int N = 1010;
int n, m, found = false;
char grid[N][N];
bool vis[N][N];
vector<pair<int, int>> dir = {{0, 1}, {1, 0}, {-1, 0}, {0, -1}};

bool valid(int x, int y)
{
    if (x < 0 || x >= n || y < 0 || y >= m)
        return false;
    return true;
}

void dfs(int si, int sj)
{
    vis[si][sj] = true;

    for (int i = 0; i < 4; i++)
    {
        int ci = si + dir[i].first;
        int cj = sj + dir[i].second;
        if (grid[ci][cj] == 'B')
        {
            found = true;
            return;
        }
        if (valid(ci, cj) && vis[ci][cj] == false && grid[ci][cj] == '.')
            dfs(ci, cj);
    }
}
int main()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> grid[i][j];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (grid[i][j] == 'A')
            {
                dfs(i, j);
                if (found == true)
                {
                    cout << "YES\n";
                    return 0;
                }
                else
                {
                    cout << "NO\n";
                    return 0;
                }
            }

    return 0;
}