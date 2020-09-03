class Solution {
public:

    int myAtoi(string str) {
        int len = str.length();
        if(len==0) return 0;
        int num =0;
        int sig=1;
        int i=0;
        while(i<len && str[i]==' ') i++;
        if(i<len &&( str[i]=='+' || str[i]=='-'))
            sig = (str[i++]=='-')? -1 : 1;
        while(i< len && str[i]>= '0' && str[i]<='9')
        {
           
            if( num > INT_MAX/10 || (num == INT_MAX/10 && (str[i]-'0') > INT_MAX %10))
            {
                return (sig==1)? INT_MAX : INT_MIN;
            }
            num = num*10 + (str[i++]-'0');       
        }
     return num*sig;
    }
};
