class Solution {
public:
    void reverseString(vector<char>& s) {
        int len = s.size();
        int j = len-1;
            for(int i=0; i<len/2; i++)
                swap(s[j--],s[i]);
        

    }
};
