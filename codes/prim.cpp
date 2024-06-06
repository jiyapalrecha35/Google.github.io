#include<bits/stdc++.h>
using namespace std;

class Solution
{
	public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        // code here
        int sum=0;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        pq.push({0,0});  //{wt,0}
        
        vector<bool> vis(V,false);
        while(!pq.empty())
        {
            auto front=pq.top(); int node=front.second; int wt=front.first; pq.pop();
            //already visited and part of mst
            if(vis[node]) continue;
            
            vis[node]=true; sum+=wt;
            for(auto it:adj[node])
            {
                int adjNode=it[0];
                int w=it[1];
                if(!vis[adjNode]) pq.push({w,adjNode});
            }
        }
        return sum;
    }
};


//{ Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj[V];
        int i=0;
        while (i++<E) {
            int u, v, w;
            cin >> u >> v >> w;
            vector<int> t1,t2;
            t1.push_back(v);
            t1.push_back(w);
            adj[u].push_back(t1);
            t2.push_back(u);
            t2.push_back(w);
            adj[v].push_back(t2);
        }
        
        Solution obj;
    	cout << obj.spanningTree(V, adj) << "\n";
    }

    return 0;
}


// } Driver Code Ends
