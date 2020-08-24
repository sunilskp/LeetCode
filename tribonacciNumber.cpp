   // Recursion with memoization
   #define M 38
   vector<double> sol(M);
   vector<bool> sup(M);
   class Solution {
   public:
    int tribonacci(int n) 
    {
        if(n==1|| n==2)
        {
            sup[n] = 1;
            return 1;
        }
        if(n==0)
        {
            sup[n] = 1;
            return 0;
        }
        if(sup[n])
        {
            return sol[n];
        }
        else
        {
            sol[n] = (tribonacci(n-1)+tribonacci(n-2)+tribonacci(n-3));
            sup[n] = 1;
        }
        return sol[n];
    }
};

// Using Dynamic Programming

class Solution {
public:
    int tribonacci(int n) {
        if(n<=1)
            return n;
        int sol[n+1];
        sol[0] = 0;
        sol[1]=sol[2]=1;
        for(int i=3;i<=n;i++)
            sol[i] = sol[i-1] + sol[i-2] +sol[i-3];
        return sol[n];
    }
};
