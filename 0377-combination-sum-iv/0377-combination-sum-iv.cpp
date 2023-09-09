class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        map<unsigned int,unsigned int> mp;
        
        mp[0]=1;
        for(long long int i=1;i<=target;i++)
        {
            
            for(long long int j=0;j<nums.size();j++)
            {
                if(i-nums[j]>=0)
                    mp[i]+=mp[i-nums[j]];
            }
        }
        
        return mp[target];
    }
};