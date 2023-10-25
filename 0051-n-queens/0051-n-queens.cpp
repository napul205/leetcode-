class Solution {
public:
    bool isSafe(vector<string> board,int row, int col,int n)
    {
        int duprow = row;
      int dupcol = col;

      while (row >= 0 && col >= 0) {
        if (board[row][col] == 'Q')
          return false;
        row--;
        col--;
      }

      col = dupcol;
      row = duprow;
      while (col >= 0) {
        if (board[row][col] == 'Q')
          return false;
        col--;
      }

      row = duprow;
      col = dupcol;
      while (row < n && col >= 0) {
        if (board[row][col] == 'Q')
          return false;
        row++;
        col--;
      }
      return true;
    }
    
    void solve(int col,vector<string> &b,vector<vector<string>> &ans,int n)
    {
        if(col==n)
        {
            ans.push_back(b);
            return ;
        }
        
        for( int i=0;i<n;i++)
        {
            if(isSafe(b,i,col,n))
            {
                b[i][col]='Q';
                solve(col+1,b, ans, n);
                b[i][col]='.';
            }
            else
            {
                cout<<i<<" "<<col<<endl;
            }
        }
        
        
    }
    
    vector<vector<string>> solveNQueens(int n) {
        
    vector < vector < string >> ans;
      vector < string > board(n);
      string s(n, '.');
        
        for( int i=0;i<n;i++)
        {
            board[i]=s;
        }
        solve(0, board, ans, n);
      return ans;
    }
};