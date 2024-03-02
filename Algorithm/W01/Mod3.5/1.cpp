//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Function to return a list containing the DFS traversal of the graph.
    bool vis[10100];
    vector<int> output;
    void dfs(int src, vector<int> adj[])
    {
        output.push_back(src);
        vis[src] = true;
        for (int i = 0; i < adj[src].size(); i++)
        {
            int child = adj[src][i];
            if (vis[child] == false)
            {
                dfs(child, adj);
            }
        }
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[])
    {
        memset(vis, false, sizeof(vis));
        dfs(0, adj);

        return output;
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
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends