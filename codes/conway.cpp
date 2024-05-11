#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int countNeighBors(vector<vector<int>>& board,int i,int j)
    {
        int count = 0;
        int rows=board.size(); int cols=board[0].size();

        vector<pair<int,int>> directions = { { -1, -1 }, { -1, 0 }, { -1, 1 }, { 0, -1 }, { 0, 1 }, { 1, -1 }, { 1, 0 }, { 1, 1 } };
        for (auto dir : directions) {
            int newX = i + dir.first;
            int newY = j + dir.second;

            //checking if the new coordinate is a valid cell
            if (newX >= 0 && newX < rows && newY >= 0 && newY < cols && board[newX][newY] == 1) {
                count++;
            }
        }
        return count;
    }
    void gameOfLife(vector<vector<int>>& board) {
        int n=board.size(); int m=board[0].size();
        vector<vector<int>> ans(n,vector<int>(m,0));

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int neighbors=countNeighBors(board,i,j);
                 if (board[i][j] == 1 && (neighbors < 2 || neighbors > 3)) {
                    ans[i][j] = 0; // Cell dies due to underpopulation or overpopulation
                } else if (board[i][j] == 0 && neighbors == 3) {
                    ans[i][j] = 1; // Cell becomes alive due to reproduction
                } else {
                    ans[i][j] = board[i][j]; // Cell remains unchanged
                }
            }
        }
        board=ans;
        
    }
};

int main() {
    // Example usage
    vector<vector<int>> board = {
        {0, 1, 0},
        {0, 0, 1},
        {1, 1, 1},
        {0, 0, 0}
    };

    Solution solution;
    cout << "Initial Board:\n";
    for (const auto& row : board) {
        for (int cell : row) {
            cout << cell << " ";
        }
        cout << endl;
    }

    solution.gameOfLife(board);

    cout << "\nFinal Board:\n";
    for (const auto& row : board) {
        for (int cell : row) {
            cout << cell << " ";
        }
        cout << endl;
    }

    return 0;
}
