class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        set<pair<int, int>> set1;
        set<pair<int, int>> set2;
        set<vector<char>> set3;
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                
                char n = board[i][j];
                if (n != '.') {
                    int x = i, y = j, num = n - '0';
                    pair<int, int> p1 = {x, num};
                    pair<int, int> p2 = {y, num};
                    if (!set1.insert(p1).second || !set2.insert(p2).second) {
                        return false;
                    }
                }
            }
        }
      vector<unordered_set<char>> check_subbox(9);
    for (int row = 0; row < 9; row++){
        for (int col = 0; col < 9; col++){
            int loc = (row / 3) * 3 + col / 3;
            if (board[row][col] != '.' && check_subbox[loc].find(board[row][col]) != check_subbox[loc].end()){
                return false;
            }
            check_subbox[loc].insert(board[row][col]);
        }
    }
        
        
        return true;
    }
};