class Codec {
public:

    // Encodes a tree to a single string.
      string serialize(TreeNode* root) {
        queue<TreeNode*> q;
        string s = "";
        
        if(root)
        q.push(root);          
            
        while(!q.empty())
        {
            TreeNode* node = q.front();
            q.pop();
            
            if(node!=NULL)
            {
                s +=  to_string(node->val) + ",";
                q.push(node->left);
                q.push(node->right);
            }
            else
            {
                s += "null,";
            }
        }
            
        return s;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        if(data.size()==0)
            return NULL;
        
        vector<string> nums;
        string curr;
      
        for(char c: data){
            if(c==','){
                nums.push_back(curr);
                curr.clear();
            }
            else curr.push_back(c);
        }
        
        if (nums[0] == "null") {return NULL;}
        
        TreeNode* root = new TreeNode(stoi(nums[0]));
        queue<TreeNode*> q;
        q.push(root);
        int i = 1;
        
        while (!q.empty() and i < nums.size()) {
            TreeNode* tmp = q.front();
            q.pop();
            
            if (nums[i] != "null") {
                TreeNode* left = new TreeNode(stoi(nums[i]));
                tmp->left = left;
                q.push(left);
            }
            i++; ?// For left node
            if (nums[i] != "null") {
                TreeNode* right = new TreeNode(stoi(nums[i]));
                tmp->right = right;
                q.push(right);
            }
            i++; //For right node
        }
        
        return root;
    }
};
