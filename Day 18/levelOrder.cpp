vector<int> getLevelOrder(BinaryTreeNode<int> *root)
{
    
   vector<int> ans;
   if(root==NULL) return ans;
      queue<BinaryTreeNode<int> *> q;
      q.push(root);
      while(!q.empty())
      {
          BinaryTreeNode<int> * curr=q.front();
          q.pop();
          ans.push_back(curr->val);
          if(curr->left!=NULL)
          {
              q.push(curr->left);
          }
          if(curr->right!=NULL)
          {
              q.push(curr->right);
          }
      }
      return ans;
}