/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
   bool isTrue(TreeNode* root1,TreeNode* root2) 
   {
       if ((root1 == NULL) && (root2 ==NULL))
           return true;
        if (root1 != NULL && root2 != NULL)
            return ((root1->val == root2-> val) && 
            ( isTrue(root1->left,root2->right) && isTrue(root1->right,root2->left) )); 
        else
            return 0;
        
   }
    bool isSymmetric(TreeNode* root)
    {
        return (root==NULL || isTrue(root, root));
   }
};
