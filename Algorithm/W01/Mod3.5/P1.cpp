// Shahadat Osman
// Date: 01-03-2024
#include <bits/stdc++.h>
using namespace std;

const int N = 1000;
vector<int> vect[N];
bool vis[N];
int t = 0;

void dfs(int src)
{
    t++;
    vis[src] = true;

    for (int i = 0; i < vect[src].size(); i++)
        if (vis[vect[src][i]] == false)
            dfs(vect[src][i]);
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
    int a;
    cin >> a;

    memset(vis, false, sizeof(vis));
    dfs(a);
    cout << t;

    return 0;
}