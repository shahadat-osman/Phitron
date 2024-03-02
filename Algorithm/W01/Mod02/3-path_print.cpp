// Shahadat Osman
// Date: 27-02-2024
#include <bits/stdc++.h>
using namespace std;
vector<int> v[1010];
bool vis[1010];
int level[1010];
int parent[1010];
void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    level[src] = 0;

    while (!q.empty())
    {
        int pr = q.front();
        q.pop();

        for (int child : v[pr])
        {
            if (vis[child] == false)
            {
                q.push(child);
                vis[child] = true;
                level[child] = level[pr] + 1;
                parent[child] = pr;
            }
        }
    }
}
int main()
{
    int n, e, src, des;
    cin >> n >> e;

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    cin >> src >> des;

    memset(vis, false, sizeof(vis));
    memset(level, -1, sizeof(level));
    memset(parent, -1, sizeof(parent));

    bfs(src);

    vector<int> path;
    while (des != -1)
    {
        path.push_back(des);
        des = parent[des];
    }
    reverse(path.begin(), path.end());

    for (int print : path)
    {
        cout << print << " ";
    }
    cout << "\n";

    return 0;
}