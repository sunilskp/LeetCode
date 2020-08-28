class Solution {
public:
    int countPrimes(int n) {
        bool prime[n+1];
        for (int i = 2; i < n + 1; i ++) {
            prime[i] = true;
        }
        for (int i = 2; i * i < n; i ++) {
            if (prime[i]) {
                for (int j = i * i; j < n; j += i) {
                    prime[j] = false;
                }
            }
        }
        int cnt = 0;
        for (int i = 2; i < n; i ++) {
            if (prime[i]) {
                cnt ++;
            }
        }
        return cnt;
    
    }
};
