class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        
        sort(strs.begin(),strs.end());
        string f=strs[0],l=strs[strs.size()-1];
        int m=min(f.size(),l.size());
        
        for(int i=0;i<m;i++)
        {
            if(f[i]!=l[i])
                return ans;
            
            ans+=f[i];
                
        }
        
        return ans;
    }
};