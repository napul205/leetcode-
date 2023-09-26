class Solution {
public:
    string removeDuplicateLetters(string s) {
        stack<char> cs;
        unordered_set<char> seen;
        unordered_map<char,int> mp;
        
        for( int i=0;i<s.length();i++)
               mp[s[i]]=i;
        
        
        for( int i=0;i<s.length();i++)
        {
            char c=s[i];
            
            if(seen.find(c)==seen.end())
            {
                while(!cs.empty() && c<cs.top() && i<mp[cs.top()])
                {
                    seen.erase(cs.top());
                    cs.pop();
                }
                
                seen.insert(c);
                
                cs.push(c);
            }
        }
        
        string re;
        
        while(!cs.empty())
        {
            re=cs.top()+re;
            cs.pop();
        }
        
        return re;
        
    }
};