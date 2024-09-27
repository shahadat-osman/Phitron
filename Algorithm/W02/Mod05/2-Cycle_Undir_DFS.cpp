// Shahadat Osman
// Date: 05-03-2024
#include <bits/stdc++.h>
using namespace std;

vector<int> v[1005];
bool vis[1005];
int parent[1005];
bool found;

void dfs(int src)
{
    vis[src] = true;
    for (int i = 0; i < v[src].size(); i++)
    {
        int child = v[src][i];
        if (vis[child] && parent[src] != child)
            found = true;
        if (!vis[child])
        {
            parent[child] = src;
            dfs(child);
        }
    }
}
int main()
{
    int n, e;
    cin >> n >> e;

    while (e--)
    {
        int a, b;
        cin >> a >> b;

        v[a].push_back(b);
        v[b].push_back(a);
    }
    memset(vis, false, sizeof(vis));
    memset(parent, -1, sizeof(parent));
    found = false;

    for (int i = 0; i < n; i++)
        if (!vis[i])
        {
            dfs(i);
        }

    if (found == true)
        cout << "Cycle Detected\n";
    else
        cout << "Cycle Not Found\n";

    return 0;
}