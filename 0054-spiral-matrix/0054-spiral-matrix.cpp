class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        
        int nr=matrix.size();
        int nc=matrix[0].size();
        int dir=0;
        int t=0,b=nr-1,l=0,r=nc-1;
        while(t<=b && l<=r)
        {
            if(dir==0)
            {
                for( int i=l;i<=r;i++)
                    ans.push_back(matrix[t][i]);
                t++;
                dir=1;
            }
            else
                if(dir==1)
                {
                    for( int i=t;i<=b;i++)
                        ans.push_back(matrix[i][r]);
                    r--;
                    dir=2;
                }else
                    if(dir==2)
                    {
                        for( int i=r;i>=l;i--)
                            ans.push_back(matrix[b][i]);
                        dir=3;
                        b--;
                        
                    }else
                        if(dir=3)
                        {
                            for( int i=b;i>=t;i--)
                                ans.push_back(matrix[i][l]);
                            l++;
                            dir=0;
                        }
                        
        }
        
        return ans;
    }
};