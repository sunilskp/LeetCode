// Brute Froce Approach
class Solution {
public:
    string addStrings(string num1, string num2) {
        int carry=0 ;
        int l1 = num1.length();
        int l2 = num2.length();
      
        if(l1>l2 || l1==l2)
        {
            string res;
            int i,j;
            for(i=l1-1,j=l2-1; j>=0; i--,j--)
            {
                int a = num1[i]-48;
                int b = num2[j]-48;
                int sum = a+b+carry;
                string c = to_string(sum%10);
                res= c+res;;
                carry = sum/10;
            }
              while(i>=0)
            {
                int a = num1[i]-48;
                int sum = a + carry;
                string c = to_string(sum%10);
                res= c+res;;
                carry = sum/10;
                  i--;
            }
         if(carry!=0){res=to_string(carry) + res; }
         return res;
        }
        else
        {           
            string res;
            int i,j;
            for(i=l1-1,j=l2-1; i>=0; i--,j--)
            {
                int a = num1[i]-48;
                int b = num2[j]-48;
                int sum = a+b+carry;
                string c = to_string(sum%10);
                res= c+res;;
                carry = sum/10;
            }
            
            while(j>=0)
            {
                int a = num2[j]-48;
                int sum = a+ carry;
                string c = to_string(sum%10);
                res= c+res;
                carry = sum/10;
                    j--;
            }
         if(carry!=0){res=to_string(carry) + res; }
         return res;
            
        }
    }
};

// Optimized 
class Solution {
public:
    string addStrings(string num1, string num2) {
        int carry=0 ;
        int i = num1.length()-1;
        int j = num2.length()-1;
        string res;
        while( i>= 0 || j>=0 )
        {
           if(i>=0 && j>=0)
           {
               int s = num1[i]-'0' + num2[j]-'0' + carry;
               carry = s/10;
               s = s%10;
               res += ('0'+s) ;
           }
            else if (i>=0)
            {
                int s = num1[i]-'0'+carry;
                carry = s/10;
                 s = s%10;
               res +=('0'+s);
            }
            else if(j>=0)
            {
                int s = num2[j]-'0'+carry;
                carry = s/10;
                 s = s%10;
               res += ('0'+s);
            }
            i--;j--;
        }
        if(carry)
            res += ('0'+ carry);
        
         reverse(res.begin(),res.end());
         return res;
    }
};  
