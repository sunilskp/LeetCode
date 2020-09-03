class Solution {
public:
   
   string countAndSay(int n) {
    if (n == 0) return "";
    string res = "1";
    while (--n) 
    {
        string cur = "";
        int len = res.size();
        for (int i = 0; i < len; i++) {
            int count = 1;
             while ((i + 1 < len) && (res[i] == res[i + 1])){
                count++;    
                i++;
            }
            cur += to_string(count) + res[i];
        }
        res = cur;
    }
    return res;
}
};
