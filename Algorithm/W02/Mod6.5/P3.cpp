//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Function to find the shortest distance of all the vertices
    // from the source vertex S.
    int dis[100010];
    void Sol(int src, vector<vector<int>> adj[])
    {
        dis[src] = 0;
        queue<pair<int, int>> q;
        q.push({src, 0});

        while (!q.empty())
        {
            pair<int, int> cur = q.front();
            q.pop();
            for (int i = 0; i < adj[cur.first].size(); i++)
            {
                int child = adj[cur.first][i][0];
                int cost = adj[cur.first][i][1];
                int dA = dis[cur.first] + cost;
                if (dA < dis[child])
                {
                    dis[child] = dA;
                    q.push({child, dA});
                }
            }
        }
    }
    vector<int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        // Code here
        for (int i = 0; i < V; i++)
            dis[i] = INT_MAX;

        Sol(S, adj);

        vector<int> vect;
        for (int i = 0; i < V; i++)
            vect.push_back(dis[i]);

        return vect;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj[V];
        int i = 0;
        while (i++ < E)
        {
            int u, v, w;
            cin >> u >> v >> w;
            vector<int> t1, t2;
            t1.push_back(v);
            t1.push_back(w);
            adj[u].push_back(t1);
            t2.push_back(u);
            t2.push_back(w);
            adj[v].push_back(t2);
        }
        int S;
        cin >> S;

        Solution obj;
        vector<int> res = obj.dijkstra(V, adj, S);

        for (int i = 0; i < V; i++)
            cout << res[i] << " ";
        cout << endl;
    }

    return 0;
}

// } Driver Code Ends