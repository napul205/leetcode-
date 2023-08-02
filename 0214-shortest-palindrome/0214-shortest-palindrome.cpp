class Solution {
public:
    string shortestPalindrome(string s) {
        int n = s.size();
        int i=0;
        for( int j=n-1;j>=0;j--)
        {
            if(s[i]==s[j])
                i++;
        }
        
        if(i==n)
            return s;
        
        string r=s.substr(i,n);
        reverse(r.begin(),r.end());
        
        return r+shortestPalindrome(s.substr(0,i))+s.substr(i);
    }
};