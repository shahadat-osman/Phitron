// Shahadat Osman
// Date: 14-03-2024
#include <bits/stdc++.h>
using namespace std;
const int N = 110;
int arr[N][N];
int dis[N];
bool path[N];
vector<pair<int, int>> vect[N];

void dijkstra(int src)
{
    queue<pair<int, int>> q;
    q.push({src, 0});

    while (!q.empty())
    {
        pair<int, int> P = q.front();
        q.pop();
        int cur = P.first;
        int cost = P.second;
        for (int i = 0; i < vect[cur].size(); i++)
        {
            int child = vect[cur][i].first;
            int dA = cost + vect[cur][i].second;
            if (dA < dis[child])
            {
                dis[child] = dA;
                q.push({child, dA});
                path[child] = true;
            }
        }
    }
}

int main()
{
    int n, s, f;
    cin >> n >> s >> f;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
        {
            int cost;
            cin >> cost;
            arr[i][j] = cost;
            if (cost >= 0)
                vect[i].push_back({j, cost});
        }

    for (int i = 1; i <= n; i++)
        dis[i] = 9999999;

    memset(path, false, sizeof(path));

    dijkstra(s);

    if (path[f] == false)
        cout << "-1\n";
    else
        cout << dis[f];

    return 0;
}
// for (int i = 1; i <= n; i++)
// {
//     for (int j = 1; j <= n; j++)
//         cout << arr[i][j] << " ";
//     cout << "\n\n";
// }
// for (int i = 1; i <= n; i++)
// {
//     for (int j = 0; j < vect[i].size(); j++)
//         cout << i << " - " << vect[i][j].first << " " << vect[i][j].second;
//     cout << "\n";
// }