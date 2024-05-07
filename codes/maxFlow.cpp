#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool bfs(int s, int t, vector<vector<int>> &graph, int parent[], int n)
    {
        vector<bool> vis(n + 1, false);
        queue<int> q;
        q.push(s);
        while (!q.empty())
        {
            int u = q.front();
            q.pop();
            vis[u] = true;
            for (int i = 1; i <= n; i++)
            {
                if (graph[u][i] > 0 and !vis[i])
                {
                    parent[i] = u;
                    q.push(i);

                    if (i == t)
                        return true;
                }
            }
        }
        return false;
    }
    int findMaxFlow(int n, int m, vector<vector<int>> edge)
    {
        vector<vector<int>> graph(n + 1, vector<int>(n + 1, 0));
        for (int i = 0; i < m; i++)
        {
            int u = edge[i][0];
            int v = edge[i][1];
            graph[u][v] += edge[i][2];
            graph[v][u] += edge[i][2];
        }
        int parent[n + 1];
        int ans = 0;
        int s = 1;
        int t = n;

        // seeing the valid bfs paths
        while (bfs(s, t, graph, parent, n))
        {
            int max_flow = INT_MAX;
            for (int v = t; v != s; v = parent[v])
            {
                // bottleneck link
                int u = parent[v];
                max_flow = min(max_flow, graph[u][v]);
            }
            ans = ans + max_flow; // adding bottle net link to ans

            for (int v = t; v != s; v = parent[v])
            {
                int u = parent[v];
                graph[u][v] -= max_flow;
                graph[v][u] += max_flow;
            }
        }
        return ans;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int i, j, N, M, u, v, w;
        int res;
        scanf("%d %d", &N, &M);
        vector<vector<int>> Edges;
        for (i = 0; i < M; i++)
        {
            scanf("%d %d %d", &u, &v, &w);
            Edges.push_back({u, v, w});
        }
        Solution obj;
        res = obj.findMaxFlow(N, M, Edges);
        cout << res << endl;
    }
    return 0;
}
