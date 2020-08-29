class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
         int dp[triangle.size()]; 
    int n = triangle.size() - 1; 
        for (int i = 0; i < triangle[n].size(); i++)  
        dp[i] = triangle[n][i];     
    for (int i = triangle.size() - 2; i >= 0; i--)  
        for (int j = 0; j < triangle[i].size(); j++)  
            dp[j] = triangle[i][j] + min(dp[j], 
                                    dp[j + 1]); 
    return dp[0]; 
    }
};
