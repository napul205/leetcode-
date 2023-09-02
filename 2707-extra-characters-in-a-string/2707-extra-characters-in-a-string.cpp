class Solution {
public:
    int minExtraChar(string s, vector<string> dictionary) {
        int n = s.length();
        unordered_set<string> dictionarySet(dictionary.begin(), dictionary.end());
        vector<int> dp(n + 1, 0);  

        dp[n] = 0;  // Base case: no extra characters needed at the end

        for (int start = n - 1; start >= 0; start--) {
            //string curr = "";
            dp[start] =dp[start+1]+1;
            for (int end = start; end < n; end++) {
              auto  curr = s.substr(start,end-start+1);
                if (dictionarySet.count(curr)) {
                    dp[start] = min(dp[start], dp[end + 1]);
                }
            }
        }

        return dp[0] ;  
    }
};
