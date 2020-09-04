class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0; i<9; i++)
        {
            unordered_set<char>a;
            for(int j=0; j<9; j++)
            {
                if(board[i][j]!='.')
               {
                    if(a.count(board[i][j]))
                        return false;
                    else
                        a.insert(board[i][j]);
                }
            }
        
        }
        for(int i=0; i<9; i++)
        {
            unordered_set <char>a;
            for(int j=0; j<9; j++)
            {
                  if(board[j][i]!='.')
               { 
                      if(a.count(board[j][i]))
                          return false;
                      else
                        a.insert(board[j][i]);
               }
               
            }
        }
        for(int i=0; i<9; i=i+3)
        {
            for(int j=0; j<9; j=j+3)
            {
                unordered_set <char>a;
                for(int k=i; k<i+3; k++)
                {
                    for(int l=j; l<j+3; l++)
                        {
                           if(board[k][l]!='.')
                           { 
                               if(a.count(board[k][l]))
                                    return false;
                               else
                                    a.insert(board[k][l]);}
                        }
            }} } 
        
        return true;
    }
};
