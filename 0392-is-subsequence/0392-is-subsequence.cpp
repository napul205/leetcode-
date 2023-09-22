class Solution {
public:
    bool isSubsequence(std::string s, std::string t) {
        int index = 0;
        
        for (int i = 0; i < s.length(); i++) {
            index = t.find(s[i], index);
            cout<<index<<endl;
            if (index == std::string::npos) {
                return false;
            }
            index++;
        }
        return true;
    }
};