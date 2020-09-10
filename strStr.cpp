class Solution {
public:
    int strStr(string haystack, string needle) {
        int len = needle.length();
        if(len==0) return 0;
            int pos = haystack.find(needle);
            if(pos != haystack.length())
            {
                return pos;
            }
        else
            return -1;
    }
};

/* using substr
    int strStr(string haystack, string needle) {
        int len = needle.length();
        int l = haystack.length();
        if(len==0) return 0;
        for(int i=0; i<l; i++)
        {
            if(l-i<len) return -1;
            if(haystack.substr(i,len)==needle) return i;
        }
        return -1;
        
    }
    
 */
