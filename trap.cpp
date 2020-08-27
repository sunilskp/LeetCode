class Solution {
public:

    int trap(vector<int>& height) {
        int n = height.size();
        if(n==0) return 0;
        vector<int> rig(n);
        vector<int> lef(n);
        int area =0,i;
        lef[0] = height[0];
        rig[n-1] = height[n-1];
        for(i=1; i<n;i++)
            lef[i] = max(lef[i-1],height[i]);   
        
        for(i=n-2; i>=0; i--)
            rig[i] = max(rig[i+1],height[i]);
        
        for(i=0; i<n; i++)
            area = min(lef[i],rig[i])-height[i]+area;
        
    return area;
    }
};
