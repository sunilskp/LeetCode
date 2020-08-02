    bool canPartition(vector<int>& nums)
    {
        int sum =0;
        int len = nums.size();
        for(int i=0; i<len; i++)
        {
            sum =sum + nums[i];
        }
        
        if(sum %2 != 0)
        {
            return false;
        }
    
        else
        {
            bool dp [len+1][(sum/2)+1];
            for(int i=1;i<(sum/2)+1; i++)
            {
                dp[0][i]= false; 
            }
            for(int i=0;i <len+1;i++)
            {
                dp[i][0]= true; 
            }
            for(int i=1;i<len+1;i++)
            {
                for(int j=1;j<(sum/2)+1;j++)
                {
                    if(j>=nums[i-1])
                    {
                        dp[i][j] = dp[i-1][j] || dp[i-1][j-nums[i-1]];
                    }
                   
                   else{
                       dp[i][j]=dp[i-1][j];

                   }                     
                }
             }
        
         return dp[len][(sum/2)];
          }
    }
