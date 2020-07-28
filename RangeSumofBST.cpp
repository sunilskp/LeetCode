class Solution {
public:
    
    int ans=0;
    void sup(TreeNode* root,int L,int R)
    {
        if(root==NULL)
            return ;
        if (root->val>=L && root->val <=R)
            ans+=root->val;
        if(root->val>=L)
            sup(root->left,L,R);
        if(root->val<=R)
            sup(root->right,L,R);
            
    }
    int rangeSumBST(TreeNode* root, int L, int R) {
       sup(root,L,R);
        root->left=root->right=NULL;
        return ans;
    }


};
