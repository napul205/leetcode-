class Solution {
public:
    string c(string s)
    {
        sort(s.begin(),s.end());
        
        return s;
    }
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string> ans;
        int n = words.size();
        ans.push_back(words[0]);
        
        
        for (int i = 1; i < n; i++) {
           
            if (c(words[i]) != c(words[i - 1])) { 
                ans.push_back(words[i]);
            }
        }
       
        return ans;
    }
};