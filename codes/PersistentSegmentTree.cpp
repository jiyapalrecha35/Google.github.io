#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int value;
    Node *left, *right;
    Node(int val) : value(val), left(nullptr), right(nullptr) {}
};

Node *buildTree(int arr[], int low, int high)
{
    if (low == high)
    {
        return new Node(arr[low]);
    }
    int mid = (low + high) >> 1;
    Node *root = new Node(0);
    root->left = buildTree(arr, low, mid);
    root->right = buildTree(arr, mid + 1, high);
    root->value = min(root->left->value, root->right->value);
    return root;
}

Node *updateTree(Node *root, int low, int high, int idx, int newVal)
{
    if (low == high) // leaf node
    {
        return new Node(newVal);
    }
    int mid = (low + high) >> 1;
    Node *newNode = new Node(0);
    if (idx <= mid) // left part to be modified
    {
        newNode->left = updateTree(root->left, low, mid, idx, newVal);
        newNode->right = root->right; // remains unchanged
    }
    else
    {
        newNode->left = root->left; // remanins unchanged
        newNode->right = updateTree(root->right, mid + 1, high, idx, newVal);
    }
    newNode->value = min(newNode->left->value, newNode->right->value);
    return newNode;
}

int query(Node *root, int low, int high, int a, int b)
{
    if (a > high || b < low)
        return INT_MAX;
    if (a <= low && b >= high)
        return root->value;

    int mid = (low + high) >> 1;
    int leftMin = query(root->left, low, mid, a, b);
    int rightMin = query(root->right, mid + 1, high, a, b);
    return min(leftMin, rightMin);
}

int main()
{
    int n, q;
    cin >> n >> q;
    int arr[n];
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    Node *root = buildTree(arr, 0, n - 1);

    for (int i = 0; i < q; ++i)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a == 1)
        {
            arr[b - 1] = c;
            root = updateTree(root, 0, n - 1, b - 1, c);
        }
        else
        {
            cout << query(root, 0, n - 1, b - 1, c - 1) << endl;
        }
    }

    // Clean up memory
    delete root;

    return 0;
}
