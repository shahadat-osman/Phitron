// Shahadat Osman
// Date: 29-02-2024
#include <bits/stdc++.h>
using namespace std;

int n, m;
char a[20][20];
bool vis[20][20];
int lvl[20][20];
vector<pair<int, int>> dir = {{0, 1}, {1, 0}, {-1, 0}, {0, -1}};

bool valid(pair<int, int> x)
{
    if (x.first < 0 || x.first >= n || x.second < 0 || x.second >= m)
        return false;

    return true;
}

void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    lvl[si][sj] = 0;

    while (!q.empty())
    {
        pair<int, int> pr;
        pr = q.front();
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            pair<int, int> child;
            child.first = pr.first + dir[i].first;
            child.second = pr.second + dir[i].second;

            if (valid(child) && vis[child.first][child.second] == false)
            {
                q.push({child.first, child.second});
                vis[child.first][child.second] = true;
                lvl[child.first][child.second] = lvl[pr.first][pr.second] + 1;
            }
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
    memset(lvl, -1, sizeof(lvl));
    bfs(si, sj);

    cout<<lvl[2][3]<<"\n";

    return 0;
}