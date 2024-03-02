// Shahadat Osman
// Date: 29-02-2024
#include <bits/stdc++.h>
using namespace std;

vector<int> v[1010];

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
    int l;
    cin >> l;

    cout<<v[l].size()<<"\n";

    return 0;
}