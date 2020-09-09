class Solution {
public:
    string reverseWords(string s) {
        int i =0;
        int len = s.length();
        if(len==0) return s;
        while(i<len)
        {
            int k = i;
            while(s[i++]!=' ' && i<len);
            if(i>=len)  reverse(s.begin()+k , s.begin()+ i ) ; 
            else reverse(s.begin()+k,s.begin()+i-1);
        }
    return s;
    }
};
