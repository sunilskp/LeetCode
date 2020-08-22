 class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int l = nums.size();
        int j=0;
        if(!l){return 0;}
        for(int i=1; i<l;i++)
        {
            if(nums[i]!=nums[j])
            {
                j++;
                nums[j] = nums[i];
            }
        }
        return j+1;
    }
};
 /* One Liner
 nums.erase(unique(nums.begin() ,nums.end()),nums.end() );
 return nums.size();
 */
