class Solution {
public:
    vector<vector<int>> rangeAddQueries(int n, vector<vector<int>>& queries) {
        vector<vector<int>> ze(n, vector<int>(n, 0));
        
        for (const auto& query : queries) {
            int x1 = query[0];
            int y1 = query[1];
            int x2 = query[2];
            int y2 = query[3];
            
            // Increment the starting cell
            ze[x1][y1]++;
            
            // Decrement the cell below the ending cell (if within bounds)
            if (x2 + 1 < n) {
                ze[x2 + 1][y1]--;
            }
            
            // Decrement the cell to the right of the ending cell (if within bounds)
            if (y2 + 1 < n) {
                ze[x1][y2 + 1]--;
            }
            
            // Increment the cell diagonally opposite to the ending cell (if within bounds)
            if (x2 + 1 < n && y2 + 1 < n) {
                ze[x2 + 1][y2 + 1]++;
            }
        }
        
        // Perform cumulative sum to apply the actual increments
        for (int i = 0; i < n; i++) {
            for (int j = 1; j < n; j++) {
                ze[i][j] += ze[i][j - 1];
            }
        }
        
        for (int i = 1; i < n; i++) {
            for (int j = 0; j < n; j++) {
                ze[i][j] += ze[i - 1][j];
            }
        }
        
        return ze;
    }
};
