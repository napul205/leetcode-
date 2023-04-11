class Solution {
public:
    string removeStars(string s) {
        int count=0;
        
        for( int i=0;i<s.length();i++)
        {
            if(s[i]=='*')
                count++;
        }
        // if(count>=s.length()/2)
        //     return "";
        stack<char> st;
        
        for( int i=0;i<s.length();i++)
        {
            if(s[i]=='*')
            {
                if(!st.empty())
                    st.pop();
            }
            else
                    st.push(s[i]);
        }
        string se="";
        while(!st.empty())
        {
            se+=st.top();
            st.pop();
        }
        reverse(se.begin(), se.end());
        return se;
    }
};