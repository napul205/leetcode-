class Solution {
public:
    
    int longestCommonSubsequence(string text1, string text2) {
        vector<vector<int>> v(text1.size()+1, vector<int>(text2.size()+1, 0));

        for (int i = 0; i < text1.size(); i++) {
            for (int j = 0; j < text2.size(); j++) { 
                if (text1[i] == text2[j])
                    v[i+1][j+1] = 1 + v[i][j];
                else
                    v[i+1][j+1] = max(v[i][j+1], v[i+1][j]);
            }
        }

        return v[text1.size()][text2.size()];
    }
};
