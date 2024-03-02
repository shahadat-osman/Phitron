// Shahadat Osman
// Date: 01-03-2024
#include <bits/stdc++.h>
using namespace std;

const int N = 1000;
vector<int> v[N];
bool vis[N];
int nodes = 0;

void dfs(int src)
{
    nodes++;
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
    vector<int> n_nodes;
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            nodes = 0;
            dfs(i);
            n_nodes.push_back(nodes);
        }
    }
    sort(n_nodes.begin(), n_nodes.end());

    for (int print : n_nodes)
        cout << print << " ";

    return 0;
}