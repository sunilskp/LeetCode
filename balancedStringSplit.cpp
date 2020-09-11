class Solution {
public:
    int balancedStringSplit(string s) {
     int len = s.length();
        int c1 =0, c2=0;
        int sum =0;
        for(int i=0; i<len; i++)
        {
            if(s[i]=='L') c1++;
            else c2++;
            if(c1 == c2) sum++;
        }
        return sum;
    }
};
