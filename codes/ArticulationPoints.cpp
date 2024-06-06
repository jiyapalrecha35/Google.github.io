#include<bits/stdc++.h>
using namespace std;



class Solution {
    int timer=1;
  public:
    void dfs(int start,int parent,vector<int> &vis,vector<int> &time,vector<int> &low,vector<int> &mark,vector<int> adj[]){
        vis[start]=1;
        time[start]=low[start]=timer; timer++;
        
        int child=0; //for starting point
        //if child > 1 then it is 100% AP
        for(auto it:adj[start])
        {
            if(it==parent) continue;
            if(!vis[it])
            {
                dfs(it,start,vis,time,low,mark,adj);
                low[start]=min(low[start],low[it]);  //parent is greedy
                if(low[it] >= time[start] and parent!=-1)
                {
                    mark[start]=1;
                }
                child++;
            }
            else
            {
                //if its vis then we dont take min of low[it] and low[start]
                low[start]=min(low[start],time[it]);
            }
        }
        //if u r starting point and child is more than 1
        if(child > 1 and parent==-1)
        {
            mark[start]=1;
        }
    }
    vector<int> articulationPoints(int V, vector<int>adj[]) {
        // Code here
        vector<int> time(V,0);
        vector<int> vis(V,0);
        vector<int> low(V,0);
        vector<int> mark(V,0);  //to mark which are AP's
        //bec a same vertice can be encountered as AP multiple times
        
        for(int i=0;i<V;i++)
        {
            if(!vis[i])
            {
                dfs(i,-1,vis,time,low,mark,adj);
            }
        }
        
        vector<int> ans;
        for(int i=0;i<V;i++)
        {
            if(mark[i]) ans.push_back(i); 
        }
        if(ans.size()==0) return {-1};
        return ans;
    }
};



int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		vector<int> ans = obj.articulationPoints(V, adj);
		for(auto i: ans)cout << i << " ";
		cout << "\n";
	}
	return 0;
}
