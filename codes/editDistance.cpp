#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int editDistance(string s1, string s2) {
        
        int n1=s1.size();
        int n2=s2.size();
        vector<vector<int>> dp(n1+1,vector<int>(n2+1,0));
        for(int j=0;j<=n2;j++) dp[0][j]=j;
        for(int i=0;i<=n1;i++) dp[i][0]=i;

        for(int i=1;i<=n1;i++)
        {
            for(int j=1;j<=n2;j++)
            {
                if(s1[i-1] == s2[j-1]) dp[i][j]=0+dp[i-1][j-1];
                else
                {
                    int ins=1+dp[i][j-1];
                    int del=1+dp[i-1][j];
                    int rep=1+dp[i-1][j-1];

                    dp[i][j]=min(ins,min(del,rep));
                }
            }
        }
        return dp[n1][n2];
        
        
    }
};



int main() {
    int T;
    cin >> T;
    while (T--) {
        string s, t;
        cin >> s >> t;
        Solution ob;
        int ans = ob.editDistance(s, t);
        cout << ans << "\n";
    }
    return 0;
}

