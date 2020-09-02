class Solution {
public:
    int sum(int num)
    {
        int sum =0;
        while(num!=0)
        {
            sum += (num%10) * (num%10);
            num = num/10;
        }
        return sum;
    }
    bool isHappy(int n) {
        unordered_set <int>s;
        while(n!=1)
        {
            int s1 = sum(n);
            if(s.count(s1)==1) return false;
            s.insert(s1);
            n =s1;
        }
        return true;
    }
};
