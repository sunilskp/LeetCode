bool isSubsequence(string s, string t)
    {
        int size1 = s.size(), size2 = t.size();
       
        if (size1 == 0)
            return true;
        if (size2 == 0)
            return false;
        int j = 0;
          for (int i=0; i < size2; i++)
        {
            if (t[i] == s[j])
                j++;
        }

        return j == size1;
    }
