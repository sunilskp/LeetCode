class Solution {
public:
    vector<int> diStringMatch(string S) {
        int len = S.length();
        int k = len, j =0,i;
        vector<int> res(k+1);
        for( i=0; i<len; i++)
        {
            if(S[i]=='I') res[i]= j++;
            else res[i]= k--;
        }
        res[i] = j ;
        return res;
    }
};
