class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int l = arr.size();
        int M =arr[l-1];
        for(int i=l-1; i>=0;i--)
        {
            if(i==l-1){arr[l-1]=-1;}
            else
            {
                int t = arr[i];
                arr[i] = M;
                M = max(M,t);
            }
        }
        
    return arr;
    }
};
