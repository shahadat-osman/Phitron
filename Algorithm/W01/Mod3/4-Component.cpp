// Shahadat Osman
// Date: 29-02-2024
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;

vector<int> vect[N];
bool visited[N];

void dfs(int src)
{
    cout << src << " ";
    visited[src] = true;

    for (int child : vect[src])
    {
        if (visited[child] == false)
        {
            dfs(child);
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

    memset(visited, false, sizeof(visited));

    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
            dfs(i);
    }

    return 0;
}