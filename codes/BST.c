#include <stdio.h>
#include <stdlib.h>
typedef struct Tree
{
    int data;
    struct Tree *left;
    struct Tree *right;
} TREE;

TREE *insertIntoBST(TREE *root, int data)
{
    TREE *newnode = (TREE *)malloc(sizeof(TREE));
    if (!newnode)
    {
        printf("New node cant be created\n");
        return root;
    }
    else
    {
        newnode->data = data;
        newnode->left = newnode->right = NULL;
    }
    if (root == NULL)
        return newnode;
    // if (data < root->data)
    //     root->left = insertIntoBST(root->left, data);
    // if (data >= root->data)
    //     root->right = insertIntoBST(root->right, data);

    TREE *curr = root;
    TREE *par = NULL;
    while (curr)
    {
        par = curr;
        if (newnode->data < curr->data)
            curr = curr->left;
        else
            curr = curr->right;
    }
    if (newnode->data < par->data)
        par->left = newnode;
    else
        par->right = newnode;
    return root;
}

TREE *deleteFromBST(TREE *root, int data)
{
    if (!root)
        return root;

    TREE *curr, *parent, *succ, *p;
    curr = root, parent = NULL;
    while (curr != NULL && data != curr->data)
    {
        parent = curr;
        if (data < curr->data)
            curr = curr->left;
        else
            curr = curr->right;
    }
    if (curr == NULL)
        return root;
    if (!curr->left)
        p = curr->right;
    else if (!curr->right)
        p = curr->left;
    else
    {
        succ = curr->right;
        parent = NULL;
        while (succ->left != NULL)
        {
            parent = succ;
            succ = succ->left;
        }
        if (parent != NULL)
            parent->left = succ->right;
        else
            curr->right = succ->right;
        succ->left = curr->left;
        succ->right = curr->right;
        p = succ;
    }

    if (parent == NULL)
    {
        free(curr);
        return p; // Return p as the new root if curr is the root node
    }

    if (curr == parent->left)
        parent->left = p;
    else
        parent->right = p;

    free(curr);
    return root;
}

void inorder(TREE *root)
{
    if (!root)
        return;
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}
void preorder(TREE *root)
{
    if (!root)
        return;
    printf("%d ", root->data);
    preorder(root->left);
    preorder(root->right);
}
void postorder(TREE *root)
{
    if (!root)
        return;
    postorder(root->left);
    postorder(root->right);
    printf("%d ", root->data);
}
int main()
{
    TREE *root = NULL;
    root = insertIntoBST(root, 10);
    root = insertIntoBST(root, 5);
    root = insertIntoBST(root, 12);
    inorder(root);
    root = deleteFromBST(root, 10);
    inorder(root);
}