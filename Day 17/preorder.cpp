#include <bits/stdc++.h> 
/*
    Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
*/
void preorder (TreeNode *root, vector<int> &ans2)
{
    if(root==NULL) return;
    ans2.push_back(root->data);
    preorder(root->left, ans2);
    preorder(root->right, ans2);
}
vector<int> getPreOrderTraversal(TreeNode *root)
{
     vector<int> ans2;
    preorder(root,ans2);
    return ans2;
}