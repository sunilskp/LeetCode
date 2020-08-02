    // Using Recursion 
    int count=0;
    int findTargetSumWays(vector<int>& nums, int S)
    {
        sumo(nums,0,0,S);
        return count;
    }
    
    void sumo(vector<int>&nums,int n,int sum,int S)
    {
       if(n == nums.size())
        {
        if(sum == S)
        {
            count++;
        }
           
        }
        else
        {
            sumo(nums,n+1,sum+nums[n],S);
            sumo(nums,n+1,sum-nums[n],S);
        }    
        
    }
