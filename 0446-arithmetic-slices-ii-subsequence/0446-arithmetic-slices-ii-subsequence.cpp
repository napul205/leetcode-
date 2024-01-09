class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> v(n,vector<int> (n,0));
        
        map<long,vector<int>> mp;
        
        for( int i=0;i<n;i++)
        {
            long t=nums[i];
            
            mp[t].push_back(i);
        }
        
        int sum=0;
        
        for( int i=1;i<n;i++)
        {
            for( int j=i+1;j<n;j++)
            {
                long a=2L * nums[i]-nums[j];
                if(mp.find(a)!=mp.end())
                {
                    for( int k:mp[a])
                    {
                        if(k<i)
                            v[i][j]+=v[k][i]+1;
                        else
                            break;
                    }
                }
                
                sum+=v[i][j];
            }
        }
        return sum;
        
    }
};