#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int n = 3;

int count_set_bits(int n)
{
    int count = 0;
    while (n)
    {
        if (n % 2 == 1)
            count++;
        n /= 2;
    }
    return count;
}

int assign(int cost[3][3], vector<int> &job, vector<int> &dp)
{
    for (int mask = 0; mask < pow(2, n) - 1; mask++)
    {
        int x = count_set_bits(mask);
        for (int j = 0; j < n; j++)
        {
            if (((mask >> j) & 1) == 0)
            {
                if (dp[mask] + cost[x][j] < dp[mask | (1 << j)])
                {
                    dp[mask | (1 << j)] = dp[mask] + cost[x][j];
                    job[j] = x;
                }
            }
        }
    }
    return dp[pow(2, n) - 1];
}

int main()
{
    int cost[3][3] = {{3, 2, 7}, {5, 1, 3}, {2, 7, 2}};
    vector<int> dp(pow(2, n), 1e9);
    vector<int> job(n, -1);
    dp[0] = 0;

    cout << "Minimum cost: " << assign(cost, job, dp) << endl;
    cout << "Job Assignments:\n";
    for (int j = 0; j < job.size(); j++)
    {
        cout << "Person " << job[j] + 1 << " -> Job " << j + 1 << " ";
    }
    cout << endl;
}
