class Solution {
public:
    int reverse(int x) {
        long num = 0;
        while(x!=0)
        {
            int n = x%10;
            num = num *10 +n;
            if (!(num <= INT_MAX && num >= INT_MIN)) 
            {
                return 0;
            }
            x = x/10;
        }
        if(x<0) return (num*-1);
        else {return num;}
    }
};
