class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
    
        if( k==0)
            return nums;
        
        int n=nums.size();
        
        vector<int > av(n,-1);
        
        if(2*k+1>n)
            return av;
        
        long long w=0;
        
        for( int i=0;i<(2*k+1);i++)
            w+=nums[i];
        
        av[k]=w/(2*k+1);
        
        for( int i=(2*k+1);i<n;i++)
        {
            w=w-nums[i-(2*k+1)]+nums[i];
            av[i-k]=w/(2*k+1);
        }
        
        return av;
    }
};