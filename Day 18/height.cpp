int maxDepth(TreeNode<int> *root) {
   if(root==NULL) return -1; //bcoz 0 return krne k bad vo +1 krega toh 1 node k lie hote h bt we need edges so -2 return krne se when it adds 1 to it it will become 0 so 0 edges for empty nodes.
   return max(maxDepth(root->left),maxDepth(root->right))+1;
}