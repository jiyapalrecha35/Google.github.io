#include <bits/stdc++.h>
const int mod = 1e9 + 7;
using namespace std;


// function to find longest common subsequence

class Solution
{
    public:
    int tab(string s,string t,int n1,int n2)
{
	vector<vector<int>> dp(n1+1,vector<int>(n2+1,0));
	//shifting of index 
	//n is n-1 and 1 is 0

	for(int i=1;i<=n1;i++)
	{
		for(int j=1;j<=n2;j++)
		{
			if(s[i-1]==t[j-1])
			{
				dp[i][j]=1+dp[i-1][j-1];
			}
			else
			{
				dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
			}
		}
	}
    return dp[n1][n2];

}
    //Function to find the length of longest common subsequence in two strings.
    int lcs(int n, int m, string s1, string s2)
    {
        // your code here
        return tab(s1,s2,n,m);
    }
};



//{ Driver Code Starts.
int main() {
    int t, n, m;
    cin >> t;
    while (t--) {
        cin >> n >> m; // Take size of both the strings as input
        string str1, str2;
        cin >> str1 >> str2; // Take both the string as input
        Solution ob;
        cout << ob.lcs(n, m, str1, str2) << endl;
    }
    return 0;
}

// } Driver Code Ends
