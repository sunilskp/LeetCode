class Solution {
public:
int getSum(int a, int b) {
    int sum=0,carry=0;
    for(int i=0;i<32;i++)
    {
        if(((a&(1<<i))&&(b&(1<<i)))&&(carry==0))
        {
            carry=1;
        }
        else if(((a&(1<<i))&&(b&(1<<i)))&&(carry==1))
        {
            sum = (sum|(1<<i));
            carry=1;
        }
        else if(((a&(1<<i))||(b&(1<<i)))&&(carry==0))
        {
            sum = (sum|(1<<i));
            carry=0;
        }
        else if(((a&(1<<i))||(b&(1<<i)))&&(carry==1))
        {
            carry=1;
        }
        else if(carry==1)
        {
            sum = (sum|(1<<i));
            carry=0;
        }
    }
    return sum;
}
};
