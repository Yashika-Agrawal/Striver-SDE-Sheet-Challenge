//gfg solution
Node* cT(int in[], int pre[], int is, int ie,int &preIndex)
    {
        if(is>ie)
        {
            return NULL;
        }
        Node* root=new Node (pre[preIndex++]);
        int inIndex;
        for(int i=0;i<=ie;i++)
        {
            if(root->data==in[i])
            {
                inIndex=i;
                break;
            }
        }
        root->left=cT(in,pre,is,inIndex-1,preIndex);
        root->right=cT(in,pre,inIndex+1,ie,preIndex);
        return root;
    }
    Node* buildTree(int in[],int pre[], int n)
    {
        int preIndex=0;
        int is=0, ie=n-1;
        return cT(in,pre,is,ie,preIndex);
        
    }