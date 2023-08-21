class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        map<int,int> mp;
        sort(g.rbegin(),g.rend());
        sort(s.rbegin(),s.rend());
        int count=0;
        int c=0;
        
        
        for( int i =0;i<g.size();i++)
        {
            if(c<s.size() && s[c]>=g[i]){
                count++;
            c++;}
        }
        
        return count;
    }
};