// Shahadat Osman
// Date: 02-12-2024
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
int par[N];
int sz[N];
int lvl[N];

void dsu_initialize(int n)
{
    for (int i = 0; i < n; i++)
    {
        sz[i] = 1;
        par[i] = -1;
        lvl[i] = 0;
    }
}

int dsu_find(int node)
{
    if (par[node] == -1)
        return node;

    int leader = dsu_find(par[node]);
    par[node] = leader;
    return leader;
}

void UnionBy_Rank(int node1, int node2)
{
    int leaderA = dsu_find(node1);
    int leaderB = dsu_find(node2);

    if (lvl[leaderA] > lvl[leaderB])
        par[leaderB] = leaderA;

    else if (lvl[leaderA] < lvl[leaderB])
        par[leaderA] = leaderB;

    else
    {
        par[leaderB] = leaderA;
        lvl[leaderA]++;
    }
}

void UnionBy_Size(int node1, int node2)
{
    int leaderA = dsu_find(node1);
    int leaderB = dsu_find(node2);

    if (sz[leaderA] > sz[leaderB])
    {
        par[leaderB] = leaderA;
        sz[leaderA] += sz[leaderB];
    }
    else
    {
        par[leaderA] = leaderB;
        sz[leaderB] += sz[leaderA];
    }
}

int main()
{
    int n = 8;
    dsu_initialize(n);
    UnionBy_Rank(1, 2);
    UnionBy_Rank(2, 3);
    UnionBy_Rank(4, 5);
    UnionBy_Rank(5, 6);
    // UnionBy_Rank(5, 1);

    cout << dsu_find(1) << endl;
    cout << dsu_find(4) << endl;

    return 0;
}
