class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int len = nums.size();
        int maxx = INT_MIN;
        int maxy = 1; 
        int minp = 1;
        for(int i=1; i<len; i++)
        {
            if(nums[i]<0) swap(minp,maxy);
                 maxy = max(maxy*nums[i],nums[i]);
                 minp = min(minp*nums[i],nums[i]);
                 maxx = max(maxy,maxx);
        }
      
     return maxx;
    }
};
