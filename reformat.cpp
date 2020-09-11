class Solution {
public:
    string reformat(string s) {
        string d,c;
        int len = s.length();
        if(len==1) return s;
         for(auto i :s)
         {
            if( i >= 'a' && i <= 'z')c.push_back(i);
            else d.push_back(i);
         }
        int l1 = c.length();
        int l2 = d.length();
        if(abs(l1-l2)>1 ) return "";
        else 
        {
            
            string res;
            int i,j;
            for(i=0,j=0; i<l1 &&j<l2; i++,j++)
            {
                if(l1>l2)
                {
                    res.push_back(c[i]);
                    res.push_back(d[j]);
                }
                else
                {
                    res.push_back(d[i]);
                    res.push_back(c[j]);
                }
            }
            if(i<l1)
                res.push_back(c[i++]);
            
            if(j<l2)
                res.push_back(d[j++]);
            
            return res;
        }
        
    }
};
