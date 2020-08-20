class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        set <int> s;
        map <int,int> a;
        for(int ix : arr)
        {
            a[ix]++;
        }
           for (auto it= a.begin(); it !=a.end(); it++  )
        {
            s.insert(it->second); 
        }
        if(a.size() == s.size())
            return true;
        return false;
       
    }
}; 
