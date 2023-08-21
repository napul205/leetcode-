class Solution {
public:
    int maxScore(vector<int>& cp, int k) {
        int res=0;
        for( int i=0;i<k;i++)
        {
            res+=cp[i];
        }
        
        int c=res;
        
        for( int i=k-1;i>=0;i--)
        {
            c-=cp[i];
            c+=cp[cp.size()-k+i];
            
            res=max(res,c);
        }
        
        return res;
        
    }
};