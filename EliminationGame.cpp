       int lastRemaining(int n)
    {
        return sol(1, 1, n);
    }
    
    int sol(int beg, int dif, int count)
    {
        if(count == 1)
            return beg;
        else if(count <= 3)
            return beg + dif;
        
        beg += dif;
        dif *= 2;
        count /= 2;
        if(count % 2 == 1)
            beg += dif;
        count /= 2;
        dif *= 2;
        return sol(beg, dif, count);
    }
