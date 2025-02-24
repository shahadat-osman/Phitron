// Shahadat Osman
//  Date: 07-12-2024
#include <bits/stdc++.h>
using namespace std;
char grid[35][35];
bool vis[35][35];
int dis[35][35];
int n;
vector<pair<int, int>> dir = {{0, 1}, {1, 0}, {-1, 0}, {0, -1}};
bool valid(int i, int j)
{
    return (i >= 0 && i < n && j >= 0 && j < n);
}
void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    dis[si][sj] = 0;

    while (!q.empty())
    {
        pair<int, int> parent = q.front();
        q.pop();
        for (pair<int, int> child : dir)
        {
            int ci = child.first + parent.first;
            int cj = child.second + parent.second;
            if (valid(ci, cj) && !vis[ci][cj] && grid[ci][cj] != 'O')
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                dis[ci][cj] = dis[parent.first][parent.second] + 1;
            }
        }
    }
}
void solve()
{
    cin >> n;
    int mi, mj, ri, rj, di, dj;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> grid[i][j];
            if (grid[i][j] == 'M')
            {
                mi = i;
                mj = j;
            }
            if (grid[i][j] == 'R')
            {
                ri = i;
                rj = j;
            }
            if (grid[i][j] == 'D')
            {
                di = i;
                dj = j;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            vis[i][j] = false;
            dis[i][j] = -1;
        }
    }

    bfs(mi, mj);
    int to_rita = dis[ri][rj];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            vis[i][j] = false;
            dis[i][j] = -1;
        }
    }

    bfs(ri, rj);
    int to_door = dis[di][dj];

    if (to_rita == -1 || to_door == -1)
        cout << -1 << endl;

    else
        cout << to_rita + to_door << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}