  int longestPalindromeSubseq(string s) {
        string s1 = s;
        reverse(s1.begin(),s1.end());
       int len1 = s.length();
        int dp [len1+1][len1+1];
        memset(dp,0,sizeof(dp));
    
        for(int i=1; i<=len1; i++)
        {
            for(int j=1;j<=len1; j++)
            {
               
                    if(s[i-1]==s1[j-1])
                {
                   dp[i][j] = 1 + dp[i-1][j-1];
                }
                else
                {
                    dp[i][j]= max(dp[i][j-1],dp[i-1][j]);
                }
                
             }
            
        }
        return dp[len1][len1];
    }
