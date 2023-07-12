int balance(BinaryTreeNode<int>* root)
    {
         if(root==NULL) return 0;
        int left=balance(root->left); 
        if(left==-1) return -1;
        int right=balance(root->right);
        if(right==-1) return -1;
        if(abs(left-right)>1) return -1;
        else return max(left,right)+1;
        
    }
    bool isBalancedBT(BinaryTreeNode<int>* root)
    {
       if(balance(root)!=-1) 
       {
           return true;
       }
       else return false;
       
    }
