class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = s.length();
        if(len==0){ return 0; }
        int sum=0;
        for(int i=len-1;i>=0;i--)
        {
            if(s[i]!=' ')
            {
               sum++; 
            }      
            else if(sum>0 && s[i]==' ')
            {
               break;  
            }     
        }
        return sum;
    }
};
