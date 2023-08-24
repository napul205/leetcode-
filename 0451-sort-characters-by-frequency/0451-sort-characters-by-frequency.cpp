class Solution {
public:
    string combo(char ch, int n) {
        string ans = "";
        for (int i = 0; i < n; i++) {
            ans += ch;
        }
        return ans;
    }
    
    string frequencySort(string s) {
        vector<pair<char, int>> v;
        map<char, int> mp;

        for (int i = 0; i < s.length(); i++) {
            mp[s[i]]++;
        }

        for (auto it : mp) {
            v.push_back(make_pair(it.first, it.second));
        }

        sort(v.begin(), v.end(), [](const pair<char, int>& a, const pair<char, int>& b) {
            return a.second > b.second;
        });

        string ans = "";

        for (int i = 0; i < v.size(); i++) {
            ans = ans + combo(v[i].first, v[i].second);
        }

        return ans;
    }
};
