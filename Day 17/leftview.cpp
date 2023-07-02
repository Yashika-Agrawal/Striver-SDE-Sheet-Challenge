void print(TreeNode<int> *root, int level, vector<int> &ans, int &maxlevel)
{
    if (root == NULL)
        return;

    if (level > maxlevel)
    {
        ans.push_back(root->data);
        maxlevel = level;
    }

    print(root->left, level + 1, ans, maxlevel);
    print(root->right, level + 1, ans, maxlevel);
}

vector<int> getLeftView(TreeNode<int> *root)
{
    vector<int> ans;
    int maxlevel = 0;
    print(root, 1, ans, maxlevel);
    return ans;
}