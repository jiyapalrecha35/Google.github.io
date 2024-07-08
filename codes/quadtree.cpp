// Definition for a QuadTree node.
class Node {
public:
    bool val;
    bool isLeaf;
    Node* topLeft;
    Node* topRight;
    Node* bottomLeft;
    Node* bottomRight;
    
    Node() : val(false), isLeaf(false), topLeft(nullptr), topRight(nullptr), bottomLeft(nullptr), bottomRight(nullptr) {}
    
    Node(bool _val, bool _isLeaf) : val(_val), isLeaf(_isLeaf), topLeft(nullptr), topRight(nullptr), bottomLeft(nullptr), bottomRight(nullptr) {}
    
    Node(bool _val, bool _isLeaf, Node* _topLeft, Node* _topRight, Node* _bottomLeft, Node* _bottomRight)
        : val(_val), isLeaf(_isLeaf), topLeft(_topLeft), topRight(_topRight), bottomLeft(_bottomLeft), bottomRight(_bottomRight) {}
};

class Solution {
public:
    bool checkIfAllSame(vector<vector<int>>& grid, int x, int y, int n) {
        int val = grid[x][y];
        for (int i = x; i < x + n; ++i) {
            for (int j = y; j < y + n; ++j) {
                if (grid[i][j] != val) {
                    return false;
                }
            }
        }
        return true;
    }

    Node* build(vector<vector<int>>& grid, int x, int y, int n) {
        if (checkIfAllSame(grid, x, y, n)) {
            return new Node(grid[x][y], true);
        }

        int half = n / 2;
        Node* topLeft = build(grid, x, y, half);
        Node* topRight = build(grid, x, y + half, half);
        Node* bottomLeft = build(grid, x + half, y, half);
        Node* bottomRight = build(grid, x + half, y + half, half);
        
        return new Node(false, false, topLeft, topRight, bottomLeft, bottomRight);
    }

    Node* construct(vector<vector<int>>& grid) {
        int n = grid.size();
        return build(grid, 0, 0, n);
    }
};

int main() {
    vector<vector<int>> grid = {
        {1, 1, 0, 0},
        {1, 1, 0, 0},
        {0, 0, 1, 1},
        {0, 0, 1, 1}
    };
    
    Solution solution;
    Node* root = solution.construct(grid);
    
    
    printQuadTree(root);
    cout << "Root is leaf: " << root->isLeaf << ", Value: " << root->val << endl;
    
    return 0;
}
