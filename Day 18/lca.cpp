int lowestCommonAncestor(TreeNode<int>* root, int n1, int n2)
{
    if (root == nullptr)
        return -1;

    if (root->data == n1 || root->data == n2)
        return root->data;

    int lca1 = lowestCommonAncestor(root->left, n1, n2);
    int lca2 = lowestCommonAncestor(root->right, n1, n2);

    if (lca1 != -1 && lca2 != -1)
        return root->data;

    // One subtree contains both nodes
    if (lca1 != -1)
        return lca1;
    else
        return lca2;
}