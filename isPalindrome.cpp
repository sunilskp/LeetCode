class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
        {
            return false;
        } 
        int z(x);
        long xy =0;
     
        while(x!=0)
        {
                xy = (xy*10) +  x % 10;
                x = x/10;
        }
        
        return (z == xy);
    }
};
