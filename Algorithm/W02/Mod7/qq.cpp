// Shahadat Osman
// Date: 18-03-2024
#include <bits/stdc++.h>
using namespace std;

class Edge
{
public:
    int u, v, c;
    Edge(int u, int v, int c)
    {
        this->u = u;
        this->v = v;
        this->c = c;
    }
};

int main()
{
    int n, e;
    cin >> n >> e;

    vector<Edge> edgelist;

    while (e--)
    {
        int u, v, c;
        cin >> u >> v >> c;
        edgelist.push_back(Edge(u, v, c));
    }
    const int N = 1e5 + 10;
    int dis[N];

    for (int i = 1; i < n; i++)
        dis[i] = INT_MAX;

    dis[0] = 0;

    for (int i = 1; i <= n - 1; i++)
    {
        for (Edge ed : edgelist)
        {
            int u, v, c;
            u = ed.u;
            v = ed.v;
            c = ed.c;

            if (dis[u] < INT_MAX && dis[u] + c < dis[v])
                dis[v] = dis[u] + c;
        }
    }

    for (int i = 0; i < n; i++)
        cout << dis[i] << " ";

    return 0;
}