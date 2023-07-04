bool path(TreeNode<int>* root, vector<int> &ans, int x)
{
	if(root==NULL) return false;
	ans.push_back(root->data);
	if(root->data==x) return true;
	// move to left
	if(path(root->left,ans,x)||(path(root->right,ans,x)))
	{
		return true;
	}
    // if both returned false
	ans.pop_back();
	return false;
}
vector<int> pathInATree(TreeNode<int> *root, int x)
{
    vector<int> ans;
	path(root,ans,x);
	return ans;
}