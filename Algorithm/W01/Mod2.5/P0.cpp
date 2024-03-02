// Shahadat Osman
// Date: 29-02-2024
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Function to return Breadth First Traversal of given graph.
    bool visited[10100];

    vector<int> bfsOfGraph(int V, vector<int> adj[])
    {
        queue<int> q;
        vector<int> bfs;
        memset(visited, false, sizeof(visited));

        q.push(0);
        visited[0] = true;
        while (!q.empty())
        {
            int pr = q.front();
            q.pop();

            bfs.push_back(pr);

            for (int i = 0; i < adj[pr].size(); i++)
            {
                int child = adj[pr][i];
                if (visited[child] == false)
                {
                    q.push(child);
                    visited[child] = true;
                }
            }
        }

        return bfs;
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
        cin >> V >>

            E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++)
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            // 		adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.bfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends