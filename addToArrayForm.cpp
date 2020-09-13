// Brute Force Approach
class Solution {
public:
    vector<int> addToArrayForm(vector<int>& A, int K) {
        int len = A.size();
        vector<int>res;
        int c =0,i = len-1;
        while( i>=0 || K!=0 ) 
        {
           if(i>=0 && K!=0 )
            { 
                int s = (A[i]) + (K%10) + c;
                c = s/10;
                res.push_back(s%10);
                K = K/10;
                i--;
            }
            else if(i>=0 && K==0  )
            {
                int s = (A[i]) + c;
                c = s/10;
                res.push_back(s%10);
                i--;
            }
            else if(K!=0 && i == -1)
            {
                int s = (K%10)+c;
                c = s/10;
                res.push_back(s%10);
                K = K/10;
            }
        }
        if(c)
        {
            res.push_back(c);
        }
        reverse(res.begin(),res.end());
        return res;
    }
};

// Optimized one

class Solution {
public:
    vector<int> addToArrayForm(vector<int>& A, int K) {
        int i = A.size()-1;
        vector<int>res;
        while( i>=0 || K!=0 ) 
        {
           if(i>=0)
            { 
                K = A[i] + K;
            }
            res.push_back(K % 10);
            K = K/10;
            i--;
            
        }
        reverse(res.begin(),res.end());
        return res;
    }
};
