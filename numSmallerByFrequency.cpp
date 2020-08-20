class Solution {
public:
    int freq (string words)
    {
        int a[26];
        memset(a,0,sizeof(a));
        int len = words.length();
        for(int i=0; i<len; i++)
        {
            a[words[i]-97]++;
        }
        for(int i=0; i<26; i++)
        {
            if(a[i]!=0)
            {
                return a[i];
            }
        }
        return -1;
    }
    vector<int> numSmallerByFrequency(vector<string>& queries, vector<string>& words) {
        vector<int> que;
        vector<int>wor;
        for(string &y : queries)
        {
            que.push_back(freq(y));
        }
        for(string &x : words)
        {
            wor.push_back(freq(x));
        }
        int len1 = que.size();
        int len2 = wor.size();
        vector<int> n;
        for(int i=0; i<len1; i++)
        {
            int count=0;
            for(int j=0; j<len2; j++)
            {
                if(que[i]<wor[j])
                {
                    count++;
                }
            }
            n.push_back(count);
        }
        return n;
    }
};
