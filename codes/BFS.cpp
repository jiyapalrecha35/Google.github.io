#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        vector<int> dfs;
        vector<bool> vis(V,false);
        queue<int> q;
        q.push(0);
        vis[0]=true;
        while(!q.empty())
        {
            int top=q.front();
            q.pop();
            for(auto it:adj[top])
            {
                if(!vis[it])
                {
                    vis[it]=true;
                    q.push(it);
                }
            }
            dfs.push_back(top);
        }
        return dfs;
        // Code here
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >>

            E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            // 		adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.bfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
