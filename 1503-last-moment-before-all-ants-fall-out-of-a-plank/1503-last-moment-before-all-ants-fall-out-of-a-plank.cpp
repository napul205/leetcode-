class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        int ans=0;
        
        for( int it: left)
            ans=max(it,ans);
        
        for( int it: right)
            ans=max(ans,n-it);
        return ans;
    }
};