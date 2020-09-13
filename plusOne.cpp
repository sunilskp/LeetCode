// Brute Force Approach
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i = digits.size()-1;
        int sum = digits[i--]+1;
        int c = sum/10;
        
        if(c)
        {
            vector<int> res;
            res.push_back(sum%10);
            for( ; i>=0; i--)
            {
                c = c + digits[i];
                res.push_back(c%10);
                c=c/10;
                
            }
            if(c) res.push_back(c);
            reverse(res.begin(),res.end());
            return res;
        }
        else
        {
            digits[digits.size()-1] = sum;
            return digits;
        }
    }
};

//optimized

class Solution {
public:
        vector<int> plusOne(vector<int>& digits) {
        int i=digits.size()-1;
        for(i;i>=0;i--){
            if(digits[i]<9)
            {
                digits[i]++;
                return digits;
            }
            digits[i]=0;
        }
        vector<int>digit1(digits.size()+1,0);
        digit1[0]=1;
        return digit1;
    }
};
