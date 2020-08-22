class StockSpanner {
public:
    stack<pair<int,int> > s;
    int i=1;
    StockSpanner() {
        
    }
    int next(int price)
    {
       
         if(s.empty())
         {
            int ans=i;
            s.push({price,i++});
            return ans;
         }
        else
        {
            while (!s.empty() && s.top().first<=price) 
            {
                s.pop();
            }
            int ans= (s.empty()) ? i: i-s.top().second;
            s.push ( {price,i++} );
            return ans;
        }
        
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
