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
// using Dynamic Programming

class Solution {
   
public:
    int findTargetSumWays(vector<int>& nums, int S)
    {
             int len = nums.size();
             int sum = 0;  
             for (int i = 0; i < len; i++) 
             sum += nums[i]; 
             if(sum<S || -S < -sum)
             {
                 return 0;
             }
             if((sum+S)%2==1)
             {
                 return 0;
             }
             int diff = (sum+S)/2;
             int dp [diff+1];
             memset(dp,0,sizeof(dp));     
             dp[0]=1;
            for (int i=0; i<len; i++) 
            { 
            
                for (int j=diff; j>=nums[i]; j--) 
                { 
                    dp[j] = dp[j]+dp[j-nums[i]]; 
                } 

            } 
        return dp[diff];
        
    }
};
