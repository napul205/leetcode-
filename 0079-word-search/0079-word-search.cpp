class Solution {
public:
    bool callit(vector<vector<char>>& b, int index, int row, int col, string& word) {
        if (index == word.length()) {
            return true;
        }

        if (row < 0 || col < 0 || row == b.size() || col == b[0].size() || b[row][col] != word[index] || b[row][col] == '!') {
            return false;
        }

        char c = b[row][col];
        b[row][col] = '!';

        bool left = callit(b, index + 1, row, col - 1, word);
        bool right = callit(b, index + 1, row, col + 1, word);
        bool top = callit(b, index + 1, row - 1, col, word);
        bool bottom = callit(b, index + 1, row + 1, col, word);

        b[row][col] = c;

        return top || right || bottom || left;
    }

    bool exist( vector<vector<char>>& b,  string& w) {
        for (int i = 0; i < b.size(); i++) {
            for (int j = 0; j < b[0].size(); j++) {
                if (b[i][j] == w[0]) {
                    if (callit(b, 0, i, j, w)) {
                        return true;
                    }
                }
            }
        }
        return false;
    }
};
