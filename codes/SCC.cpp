#include<bits/stdc++.h>
using namespace std;

class Solution
{
	public:
	void dfs(int node, vector<vector<int>>& adj, vector<int>& vis, stack<int> &s) {
        vis[node] = 1;
        for (auto it : adj[node]) {
            if (!vis[it]) {
                dfs(it, adj, vis, s);
            }
        }
        s.push(node);
    }
    
	//Function to find number of strongly connected components in the graph.
    int kosaraju(int V, vector<vector<int>>& adj)
    {
        //step1
        //sort the edges according to finish time
        vector<int> vis(V, 0);
        stack<int> st;
        for (int i = 0; i < V; i++) {
            if (!vis[i]) {
                dfs(i,adj,vis, st);
            }
        }


        //reverse the edges
        // Creating the transpose graph (adjT)
        vector<vector<int>> adjT(V);
        for (int i = 0; i < V; i++) {
            for (int it : adj[i]) {
                adjT[it].push_back(i);
            }
        }
        
        //perform dfs
        for(int i=0;i<V;i++) vis[i]=0;
        int scc = 0;
        stack<int> s;
        while (!st.empty()) {
            int node = st.top();
            st.pop();
            if (!vis[node]) {
                scc++;
                dfs(node,adjT,vis,s);
            }
        }
        return scc;
    }
};




int main()
{
    
    int t;
    cin >> t;
    while(t--)
    {
    	int V, E;
    	cin >> V >> E;

    	vector<vector<int>> adj(V);

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    	}

    	Solution obj;
    	cout << obj.kosaraju(V, adj) << "\n";
    }

    return 0;
}


// } Driver Code Ends
