//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    int select_all;
    
    int helper(int src, vector<vector<int>> &cost, int n, int mask, vector<vector<int>> &dp) {
        if(mask == select_all) return cost[src][0];   //means we have found optimal sol
        
        if(dp[mask][src] != -1) return dp[mask][src];
        
        int ans = INT_MAX;
        for(int i = 0; i < n; i++)  //dest
        {
            if(i == src) continue;
            
            if((mask & (1 << i)) == 0) // Check if i is not included in the mask
            {
                ans = min(ans, cost[src][i] + helper(i, cost, n, mask | (1 << i), dp));
            }
        }
        return dp[mask][src] = ans;
    }

    int total_cost(vector<vector<int>> cost) {
        int n = cost.size();
        vector<vector<int>> dp((1 << n), vector<int>(n, -1));
        select_all = (1 << n) - 1;
        return helper(0, cost, n, 1, dp);
    }
};



//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>cost(n, vector<int>(n, 0));
		for(int i = 0; i < n; i++)
			for(int j = 0; j < n; j++)cin >> cost[i][j];
		Solution obj;
		int ans = obj.total_cost(cost);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends
