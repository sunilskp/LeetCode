class Solution {
public:
    int r(char ch)
    {
        if(ch=='I') return 1;
        if(ch=='V') return 5;
        if(ch=='L') return 50;
        if(ch=='X') return 10;
        if(ch=='C') return 100;
        if(ch=='D') return 500;
        if(ch=='M') return 1000;
        
        return 0;
    }
    int romanToInt(string s) {
        int num =0;
        int len = s.length();
        for(int i=0; i<len; i++)
        {
            int n = r(s[i]);
            if(i+1 < len)
           { 
            int p = r(s[i+1]);
            if(p>n)
            {
                num = num +(p-n);
                 i++;
            }
            else
            {
                num = n+ num;
               
            }
                
           }
        else num = n+num;
            
            
        }
        return num;
    }
};
