class Solution {
public:
    int firstUniqChar(string s) {
        unsigned int a[26] = {0};
        unsigned int len = s.length();
        for(unsigned int i=0; i<len; i++)
            a[s[i]-'a']++;
      
         for(unsigned int i=0; i<len; i++)
            if(a[s[i]-'a']==1) return i;
        return -1;
}
};
