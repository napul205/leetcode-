class Solution {
public:
    void solve(string digits, string op, int index, vector<string>& ans, string mp[])
    {
        if (index >= digits.length())
        {
            ans.push_back(op);
            return;
        }

        int n = digits[index] - '0';
        string val = mp[n];

        for (int i = 0; i < val.length(); i++)
        {
            op.push_back(val[i]);
            solve(digits, op, index + 1, ans, mp);
            op.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {
        vector<string> ans;

        if (digits.length() == 0)
            return ans;

        string op = "";
        int index = 0;

        string mp[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" };

        solve(digits, op, index, ans, mp);

        return ans;
    }
};
