class Solution {
public:
    vector<int> Left(vector<int>& heights,int len)
    {
        vector<int>left(len);
        stack<int>s1;
         for(int i=0; i<len; i++)
        {
         
             while(s1.size()>0 && heights[s1.top()] >= heights[i] )
            {
                s1.pop();   
            }
            if(s1.size()==0) left[i] = i;
            else left[i] = i-s1.top()-1;
            
            s1.push(i);
        }
        return left;
    }
      vector<int> Right(vector<int>& heights, int len)
    {
        vector<int>right(len);
        stack<int>s1;
        for(int i=len-1; i>=0; i--)
        {
           while(s1.size()>0 && heights[s1.top()] >= heights[i] )
            {
                s1.pop();   
            }
            if(s1.size()==0) right[i] =len-i-1;
            else right[i] = s1.top()-i-1;
            
            s1.push(i);
        }
        return right;
    }  
     
    int largestRectangleArea(vector<int>& heights) {
        
        int len = heights.size();
        if(len==0){return 0;}
        vector<int>left = Left(heights,len);
        vector<int>right = Right(heights,len);
        int MAX = 0;
        for(int i=0; i<len; i++)
           MAX = max(MAX,((right[i]+left[i]+1)*heights[i]));
        
    return MAX;
    }
};
