// Shahadat Osman
// Date: 04-03-2024
#include <bits/stdc++.h>
using namespace std;

vector<int> vect[1005];
bool vis[1005];
int parent[1005];
bool found;

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;

    while (!q.empty())
    {
        int cur = q.front();
        q.pop();

        for (int i = 0; i < vect[cur].size(); i++)
        {
            int child = vect[cur][i];
            if (vis[child] && parent[cur] != child)
                found = true;
            if (!vis[child])
            {
                vis[child] = true;
                q.push(child);
                parent[child] = cur;
            }
        }
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
        vect[x].push_back(y);
        vect[y].push_back(x);
    }
    memset(vis, false, sizeof(vis));
    memset(parent, -1, sizeof(parent));

    found = false;
    for (int i = 0; i < n; i++)
        if (!vis[i])
            bfs(i);

    if (found == true)
        cout << "Cycle Detected\n";
    else
        cout << "Cycle Not Found\n";

    return 0;
}