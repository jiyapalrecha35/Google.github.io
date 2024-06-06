#include<bits/stdc++.h>
using namespace std;
class Solution
{
    int timer=1;
	public:
    //Function to find if the given edge is a bridge in graph.
    void dfs(int node,int parent,vector<int> &vis,vector<int> &time,vector<int> &low,
    vector<int> adj[],vector<vector<int>> &ans){
        vis[node]=1;
        low[node]=time[node]=timer;
        timer++;
        
        for(auto it:adj[node])
        {
            if(it== parent) continue;
            if(vis[it]==0)
            {
                dfs(it,node,vis,time,low,adj,ans);
                low[node]=min(low[node],low[it]);
                
                if(low[it] > low[node]) //bridge
                {
                    ans.push_back({it,node});
                }
            }
            else
            {
                low[node]=min(low[node],low[it]);   
            }
        }
        
    }
    int isBridge(int V, vector<int> adj[], int c, int d) {
    vector<int> vis(V, 0);
    vector<int> time(V, 0);
    vector<int> low(V, 0);

    
    vector<vector<int>> ans;

    
    dfs(c, -1, vis, time, low, adj, ans);
        
    

    for (auto it : ans) {
    int x = it[0];
    int y = it[1];
    if (low[d] > time[c]) {
        return 1; // Edge (c - d) is a bridge
    } else {
        return 0; // Edge (c - d) is not a bridge
    }
}
   return 0;
    }

    
};

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        int i=0;
        while (i++<E) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back (v);
            adj[v].push_back (u);
        }
        
        int c,d;
        cin>>c>>d;
        
        Solution obj;
    	cout << obj.isBridge(V, adj, c, d) << "\n";
    }

    return 0;
}


