class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        
   if(str1+str2 == str2+str1)
   {
       return str1.substr(0,gcd(str1.length(),str2.length()));
   }
    else
    {
        return "";
    }
    }
    // one line code: return (str1+str2==str2+str1)?str1.substr(0,gcd(str1.length(),str2.length())):"";
};
