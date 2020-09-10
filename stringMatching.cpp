// Using Z_ALGORITHM

class Solution {
public:
bool search(string text, string pattern) 
{ 
    string concat = pattern + "$" + text; 
    int l = concat.length(); 
    int Z[l]; 
    getZarr(concat, Z); 
    for (int i = 0; i < l; ++i) 
    { 
 
        if (Z[i] == pattern.length()) 
           return true;
     }
    return false;
} 
void getZarr(string str, int Z[]) 
{ 
    int n = str.length(); 
    int L, R, k; 
    L = R = 0; 
    for (int i = 1; i < n; ++i) 
    { 
        if (i > R) 
        { 
            L = R = i; 
            while (R<n && str[R-L] == str[R]) 
                R++; 
            Z[i] = R-L; 
            R--; 
        } 
        else
        { 
            k = i-L; 
            if (Z[k] < R-i+1) 
                Z[i] = Z[k]; 
            else
            { 
                L = i; 
                while (R<n && str[R-L] == str[R]) 
                    R++; 
                Z[i] = R-L; 
                R--; 
            } 
        } 
    } 
} 
  
    vector<string> stringMatching(vector<string>& words) {
    
        unordered_set<string> res;
        int len = words.size();
        for(int i=0; i<len; i++)
        {
            for(int j=0; j<len; j++)
            {
                if(j!=i)
                {
                    if(search(words[i],words[j])) res.insert(words[j]);
                }
            }
        }
    return vector<string>(res.begin(),res.end());
    }
};
 
 /* using find
 
   
   vector<string> stringMatching(vector<string>& words) {
   unordered_set<string> res;
        for (int i = 0, n = words.size(); i < n; ++i)
            for (int j = 0; j < words.size(); ++j) 
               {
                if(i!=j)
                {
                    if (words[i].find(words[j]) != std::string::npos)
                        res.insert(words[j]);
                }
            }
        return vector<string>(res.begin(), res.end());
    }
 
 */
