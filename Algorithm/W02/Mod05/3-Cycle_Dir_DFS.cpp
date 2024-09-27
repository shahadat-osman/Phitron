// Shahadat Osman
// Date: 05-03-2024
#include <bits/stdc++.h>
using namespace std;

vector<int> v[1005];
bool vis[1005], path[1005], found;

void dfs(int src)
{
    vis[src] = true;
    path[src] = true;

    for (int i = 0; i < v[src].size(); i++)
    {
        int child = v[src][i];
        
        if (path[child])
            found = true;

        if (!vis[child])
            dfs(child);
    }
    path[src] = false;
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
    }
    memset(vis, false, sizeof(vis));
    memset(path, false, sizeof(path));
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