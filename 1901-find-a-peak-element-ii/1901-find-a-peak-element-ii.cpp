class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int s=0,e=mat[0].size()-1;
        
        while(s<=e)
        {
            int mx=0,midc=(s+e)/2;
            for( int r=0;r<mat.size();r++)
            {
                if(mat[r][midc]>mat[mx][midc])
                    mx=r;
            }
            
            if(midc-1>=s &&mat[mx][midc-1]>mat[mx][midc])
                e=midc-1;
            else
                if(midc+1<=e && mat[mx][midc+1]>mat[mx][midc])
                    s=midc+1;
                else
                    return {mx,midc};
        }
        
        return {-1,-1};
        
    }
};