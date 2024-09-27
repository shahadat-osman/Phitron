// Shahadat Osman
// Date: 06-03-2024
#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> v[1005];
int dis[1005];
class cmp
{
public:
    bool operator()(pair<int, int> a, pair<int, int> b)
    {
        return a.second > b.second;
    }
};
void dijkstra(int src)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> q;
    q.push({src, 0});
    dis[src] = 0;

    while (!q.empty())
    {
        pair<int, int> cur = q.top();
        q.pop();

        for (pair<int, int> child : v[cur.first])
        {
            int dA = cur.second + child.second;
            if (dA < dis[child.first])
            {
                dis[child.first] = dA;
                q.push({child.first, dA});
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
        int k, l, cost;
        cin >> k >> l >> cost;

        v[k].push_back({l, cost});
        v[l].push_back({k, cost});
    }
    for (int i = 0; i < n; i++)
        dis[i] = INT_MAX;

    dijkstra(0);

    for (int i = 0; i < n; i++)
        cout << dis[i] << " ";

    return 0;
}