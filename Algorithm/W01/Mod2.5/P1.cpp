// Shahadat Osman
// Date: 29-02-2024
#include <bits/stdc++.h>
using namespace std;

vector<int> v[1010];
bool vis[1010];
int level[1010];

void bfs(int src, int des)
{
    memset(vis, false, sizeof(vis));
    memset(level, -1, sizeof(level));

    queue<int> q;
    q.push(src);
    vis[src] = true;
    level[src] = 0;

    while (!q.empty())
    {
        int current = q.front();
        q.pop();

        if (des == current)
        {
            cout << level[current] << "\n";
            return;
        }
        
        for (int child : v[current])
        {
            if (vis[child] == false)
            {
                q.push(child);
                vis[child] = true;
                level[child] = level[current] + 1;
            }
        }
    }
    cout << "-1\n";
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
    int query;
    cin >> query;

    while (query--)
    {
        int S, D;
        cin >> S >> D;

        bfs(S, D);
    }

    return 0;
}