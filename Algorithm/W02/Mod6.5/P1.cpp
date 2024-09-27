//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Function to detect cycle in an undirected graph.
    bool vis[100010];
    int parent[100010], found;
    void dfs(int src, vector<int> adj[])
    {
        vis[src] = true;
        for (int i = 0; i < adj[src].size(); i++)
        {
            int child = adj[src][i];
            if (vis[child] && parent[src] != child)
                found = true;
            if (!vis[child])
            {
                parent[child] = src;
                dfs(child, adj);
            }
        }
    }
    bool isCycle(int V, vector<int> adj[])
    {
        memset(vis, false, sizeof(vis));
        memset(parent, -1, sizeof(parent));
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
    int tc;
    cin >> tc;
    while (tc--)
    {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++)
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
// } Driver Code Ends