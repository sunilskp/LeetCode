    int subtractProductAndSum(int n) 
      {
        int mul=1, add=0;
        while(n>0)
        {
            int num = n%10;
            mul = mul* num;
            add = add+num;
            n = n/10;
        }
        return mul-add;   
      }     
   
