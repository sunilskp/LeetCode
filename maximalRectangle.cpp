class Solution {
public:
     int largestRectangleArea(vector<int>& heights) {
        stack <int>S;
        int i,to=0,maxx=0;
        heights.push_back(0);
        int len = heights.size();
      
     for(i=0; i<len; i++)   
    {    
        while( !S.empty() && heights[S.top()]  >= heights[i] )
            {
                to = S.top();
                S.pop();
                int ind= S.empty() ? -1 : S.top();
                maxx = max (maxx,(heights[to]*(i-ind-1)));    
            }
         S.push(i);
    }
    return maxx;
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        if(matrix.size()==0) return 0;
        vector<int>a(matrix[0].size(),0);
        int maxx = 0;
        for(int i=0; i<matrix.size();i++)
     {  
        for(int j=0; j<matrix[i].size();j++)
        {
            if(matrix[i][j]=='0')
                a[j]=0;
            else a[j]=a[j]+1;
        }
            maxx = max(maxx,largestRectangleArea(a));
     }
        return maxx;
    }
};
