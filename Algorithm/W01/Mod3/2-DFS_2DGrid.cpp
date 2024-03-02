// Shahadat Osman
// Date: 29-02-2024
#include <bits/stdc++.h>
using namespace std;

int n, m;
char a[20][20];
bool vis[20][20];
vector<pair<int, int>> dir = {{0, 1}, {-1, 0}, {1, 0}, {0, -1}};

bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;

    return true;
}

void dfs(int si, int sj)
{
    cout << si << sj << "\n";
    vis[si][sj] = true;

    for (int i = 0; i < 4; i++)
    {
        int ci = si + dir[i].first;
        int cj = sj + dir[i].second;

        if (valid(ci, cj) && vis[ci][cj] == false)
        {
            dfs(ci, cj);
        }
    }
}

int main()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    }
    int si, sj;
    cin >> si >> sj;

    memset(vis, false, sizeof(vis));
    dfs(si, sj);

    return 0;
}