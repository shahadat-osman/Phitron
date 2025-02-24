// Shahadat Osman
// Date: 12-01-2025
#include <bits/stdc++.h>
using namespace std;

const int maxN=1000;
const int maxW=1000;

int grid[maxN][maxW];

int knapsack(int n, int value[], int weight[], int W)
{
    if (n == 0 || W == 0)
        return 0;
    
    if(grid[n][W]!=-1)
        return grid[n][W];

    if (weight[n-1] <= W)
    {
        int op1 = knapsack(n-1, value, weight, W - weight[n-1]) + value[n-1];
        int op2 = knapsack(n-1, value, weight, W);

        return grid[n][W] = max(op1, op2);
    }
    else
    {
        int op2 = knapsack(n-1, value, weight, W);

        return grid[n][W] = op2;
    }
}

int main()
{
    int n, W;
    cin >> n;
    int value[n];
    int weight[n];

    for (int i = 0; i < n; i++)
    {
        cin >> weight[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> value[i];
    }
    cin >> W;

    for(int i=0; i<=n; i++)
        for(int j=0; j<=W; j++)
            grid[i][j] = -1;
    cout << knapsack(n, value, weight, W) << endl;

    return 0;
}
