int height(TreeNode<int>* root) {
    if (root == NULL)
        return 0;
    else {
        return max(height(root->left), height(root->right)) + 1;
    }
}

int diameterOfBinaryTree(TreeNode<int>* root) {
    if (root == NULL)
        return 0;

    int d1 = height(root->left) + height(root->right);
    int d2 = diameterOfBinaryTree(root->left);
    int d3 = diameterOfBinaryTree(root->right);

    return max(d1, max(d2, d3));
}
//leetcode solution

int height(TreeNode<int>* root) {
    if (root == NULL)
        return 0;
    else {
        return max(height(root->left), height(root->right)) + 1;
    }
}

int diameterOfBinaryTree(TreeNode<int>* root) {
    if (root == NULL)
        return 0;

    int d1 = height(root->left) + height(root->right);
    int d2 = diameterOfBinaryTree(root->left);
    int d3 = diameterOfBinaryTree(root->right);

    return max(d1, max(d2, d3));
}