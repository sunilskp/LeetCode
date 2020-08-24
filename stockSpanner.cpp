class StockSpanner {
public:
    vector<int> st;
    stack<int> S;
    StockSpanner() {
        
    }
      int next(int price)
      {
        st.push_back(price);
        int cur = st.size()-1;
        int res;
    
        while(!S.empty() && st[S.top()] <= price)
            S.pop();

        res = S.empty() ? cur+1 : cur-S.top();
        S.push(cur);
        return res;
    }
};


/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
