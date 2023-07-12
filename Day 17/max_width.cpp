int getMaxWidth(TreeNode<int> *root)
{
    if(root==NULL) return 0;
    queue<TreeNode<int>*> q;
    q.push(root);
    int res=0;
    while(!q.empty())
    {
        int count=q.size();
         res= max(res,count);
        for(int i=0;i<count;i++)
        {
            TreeNode<int> *curr=q.front();
            q.pop();
            if(curr->left!=NULL)
            {
                q.push(curr->left);
            }
            if(curr->right!=NULL)
            {
                q.push(curr->right);
            }
        }
        
    }
    return res;
}