vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> s;
        vector<vector<int>> res;
        set <vector<int>> r;
        int n = nums.size();
         int len = pow(2,n);
        sort(nums.begin(),nums.end());
        for(int i=0; i<len; i++)
        {
            
            for(int j=0; j<n; j++)
            {
                if((i &(1<<j))>0)
                {
                    s.push_back(nums[j]);
                }
            }
             
            if(r.find(s)==r.end())
            {
            r.insert(s);
            res.push_back(s);    
            }
            s.clear();
        }
        return res;
        
    }
