// Shahadat Osman
// Date: 01-03-2024
#include <bits/stdc++.h>
using namespace std;

const int N = 1000;
vector<int> v[N];
bool vis[N];

void dfs(int src)
{
    vis[src] = true;

    for (int i = 0; i < v[src].size(); i++)
    {
        if (vis[v[src][i]] == false)
            dfs(v[src][i]);
    }
}

int main()
{
    int n, e;
    cin >> n >> e;

    while (e--)
    {
        int x, y;
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            dfs(i);
            cnt++;
        }
    }
    cout << cnt << "\n";

    return 0;
}