
class Solution
{
public:
        unordered_map<int,int> mp;
        int ind;
        TreeNode* Tree(int i,int j,vector<int>& pre, vector<int>& in){
        if(i>j){return NULL;}
        int val = pre[ind++];
        TreeNode* t = new TreeNode(val);
        if(i==j){return t;}
        int k = mp[val];
        t->left = Tree(i,k-1,pre,in);
        t->right = Tree(k+1,j,pre,in);
        return t;
}
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder)
    {
        ind = 0;
        int n = inorder.size();
        for(int i=0;i<n;i++)
        {
            mp[inorder[i]]=i;
        }
        return Tree(0,n-1,preorder,inorder);
    }
};
