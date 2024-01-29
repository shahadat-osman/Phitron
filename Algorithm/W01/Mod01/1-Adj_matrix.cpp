// Shahadat Osman
// Date: 25-01-2024
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int nodes, edges;
    cin >> nodes >> edges;

    vector<vector<int>> vect(nodes, vector<int>(nodes));
    while (edges--)
    {
        int a, b;
        cin >> a >> b;
        vect[a][b] = 1;
        vect[b][a] = 1;
    }
    for (int i = 0; i < nodes; i++)
    {
        for (int j = 0; j < nodes; j++)
            cout << vect[i][j] << " ";
        cout << "\n";
    }

    return 0;
}