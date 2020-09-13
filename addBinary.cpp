class Solution {
public:
   string addBinary(string a, string b) 
    {
        int i = a.size()-1, j = b.size()-1;
        int carry = 0, sum;
        
        string res;
        while(i >= 0 || j >= 0 || carry)
        {
            sum = (i >= 0 ? a[i] - '0' : 0) + (j >= 0 ? b[j] - '0' : 0) + carry;
            res += ((sum % 2) + '0');
            carry = sum / 2;
            
            --i;
            --j;
        }
        reverse(res.begin(), res.end());
        
        return res;
    }
};
