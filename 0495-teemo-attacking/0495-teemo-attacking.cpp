class Solution {
public:
    int findPoisonedDuration(vector<int>& te, int d) {
        int n=te.size();
        if( n==0)
            return 0;
        
        int t=0;
        
        for( int i=0;i<n-1;i++)
        {
            t+=min(te[i+1]-te[i],d);
        }
        
        return t+d;
    }
};