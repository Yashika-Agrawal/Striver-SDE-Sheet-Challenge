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
void postorder (TreeNode* root, vector<int> &ans3)
{
        if(root==NULL) return;
        postorder(root->left,ans3);
        postorder(root->right,ans3);
        ans3.push_back(root->data);
}
vector<int> getPostOrderTraversal(TreeNode *root)
{
   vector<int>ans3;
     postorder(root,ans3);
     return ans3;
}