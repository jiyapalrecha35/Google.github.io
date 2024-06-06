
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
   void dfsG(vector<int> &vis,int start,vector<int> &dfs,vector<int> adj[])
   {
       vis[start]=1;
       dfs.push_back(start);
       for(auto it:adj[start])
       {
           if(!vis[it])
           {
               vis[it]=1;
               dfsG(vis,it,dfs,adj);
           }
       }
       
   }
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        vector<int> dfs;
        vector<int> vis(V,false);
        dfsG(vis,0,dfs,adj);
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
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
