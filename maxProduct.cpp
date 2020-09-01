class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int len = nums.size();
        int maxx = nums[0];
        int maxy = nums[0]; 
        int minp = nums[0];
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
