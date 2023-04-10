class Solution {
public:
    bool isValid(string s) {
      if (s.length() < 2 || s[0] == ']' || s[0] == ')' || s[0] == '}')
        {
            return false;
        }

        stack<char> stk;

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{')
            {
                stk.push(s[i]);
            }
            else
            {
                if (stk.empty()) return false;
                if (s[i] == ')' && stk.top() != '(')
                    return false;
                if (s[i] == ']' && stk.top() != '[')
                    return false;
                if (s[i] == '}' && stk.top() != '{')
                    return false;

                stk.pop();
            }
        }
        return stk.empty();
    }
};