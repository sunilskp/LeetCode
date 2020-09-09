class Solution {
public:
    string reverseStr(string s, int k) {
        int len = s.length();
        int i=0;
        while(i<len)
        {
            if(len-i >= k)
            {
                int l = i+k-1;
                int m = i;
                for(int z=0; z<k/2; z++)
                {
                    swap(s[m++],s[l--]);
                }
            }
        
            else
            {
                int l = len-1;
                int re = len-i;
                for(int j=0;  j<re/2; j++)
                {
                    swap(s[i++],s[l--]);
                }
                
            }
            i = i+(2*k);
            
        }
    return s;
    }
};
/*
Optimised
       string reverseStr(string s, int k) {
        int len = s.length();
        for(int i=0 ; i<len ; )
        {
            if(i % 2*k == 0 )
            {
                reverse(s.begin()+i , s.begin()+min(i+k,len) );
                i+=2*k;
            }
            else 
                i++;
        }
        return s;
        
    }
    */
