class Solution {
public:
    string makeGood(string s) {
     for(int i=0; i<s.length(); i++)
     {
         if(isupper(s[i]) && islower(s[i+1]))
         {
             if(s[i]==toupper(s[i+1]))
            {   
                 s.erase(i,2);
                 i =-1;
            }
          }
         else if(islower(s[i]) && isupper(s[i+1]))
         {
             if(s[i]==tolower(s[i+1]))
            {
                 s.erase(i,2);
                 i =-1;
            }
         }
        
     }
        return s;
    }
};
