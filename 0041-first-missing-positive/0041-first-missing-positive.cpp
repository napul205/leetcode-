class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        
        int c=0;
        int a=1;
        
        for( int i=0;i<nums.size();i++)
        {
            if(nums[i]>0 & nums[i]==a)
            {
                a++;
            }
        }
        return a;
    }
};