// Shahadat Osman
// Date: 29-01-2024
#include <bits/stdc++.h>
using namespace std;

vector<int> vect[1005];
bool vis[1005];
bool vis[INT_MAX];
void bfs(int src)
{
    queue<int> q;

    q.push(src);
    vis[src] = true;

    while (!q.empty())
    {
        int par = q.front();
        q.pop();

        cout << par << "\n";

        for (int i = 0; i < vect[par].size(); i++)
        {
            int child = vect[par][i];
            if (vis[child] == false)
            {
                q.push(child);
                vis[child] = true;
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

    int src;
    cin >> src;
    memset(vis, false, sizeof(vis));
    bfs(src);

    return 0;
}