class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
    unsigned int  NO_OF_BITS = 32; 
    unsigned int rev = 0, i, temp; 
  
    for (i = 0; i < NO_OF_BITS; i++) 
    { 
        temp = (n & (1 << i)); 
        if(temp) 
        {    rev |= (1 << ((NO_OF_BITS - 1) - i)); }
    } 
   
    return rev; 
    }
};
