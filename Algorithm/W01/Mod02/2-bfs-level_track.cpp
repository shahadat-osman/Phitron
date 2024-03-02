// Shahadat Osman
// Date: 26-02-2024
#include <bits/stdc++.h>
using namespace std;
vector<int> v[1010];
bool vis[1010];
int level[1010];
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

        cout << pr << " " << level[pr]<<"\n";

        for (int i = 0; i < v[pr].size(); i++)
        {
            int child = v[pr][i];

            if (vis[child] == false)
            {
                q.push(child);
                level[child] = level[pr] + 1;
                vis[child] = true;
            }
        }
    }
}
int main()
{
    int n, e, src;
    cin >> n >> e;

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    cin >> src;
    memset(vis, false, sizeof(vis));
    bfs(src);

    return 0;
}