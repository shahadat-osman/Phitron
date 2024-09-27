//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Function to detect cycle in a directed graph.
    bool vis[100010], path[100010], found;
    int parent[100010];
    void dfs(int src, vector<int> adj[])
    {
        vis[src] = true;
        path[src] = true;

        for (int i = 0; i < adj[src].size(); i++)
        {
            int child = adj[src][i];
            if (path[child])
                found = true;
            if (!vis[child])
            {
                dfs(child, adj);
            }
        }
        path[src] = false;
    }
    bool isCyclic(int V, vector<int> adj[])
    {
        // code here
        memset(vis, false, sizeof(vis));
        memset(path, false, sizeof(path));
        found = false;

        for (int i = 0; i < V; i++)
            if (!vis[i])
                dfs(i, adj);

        return found;
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

        vector<int> adj[V];

        for (int i = 0; i < E; i++)
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}

// } Driver Code Ends