vector<int> zigzagTreeTraversal(TreeNode<int> *root)
{
    vector<int>ans;
    if(root==NULL) return ans;
    stack<TreeNode<int> *> s1,s2;
    s1.push(root);
    while(!s1.empty() || !s2.empty())
    {
        while(!s1.empty())
        {
            TreeNode<int> * curr=s1.top();
            s1.pop();
            ans.push_back(curr->data);
           
           
             if(curr->left!=NULL) s2.push(curr->left);
              if(curr->right!=NULL) s2.push(curr->right);
        }
        while(!s2.empty())
        {
             TreeNode<int> * curr=s2.top();
            s2.pop();
            ans.push_back(curr->data);
           
            
             if(curr->right!=NULL) s1.push(curr->right);
             if(curr->left!=NULL) s1.push(curr->left);
        }
    }
    return ans;
}