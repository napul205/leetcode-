class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         vector<int> v;
        for(int i=0;i<nums.size()-1;i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    v.insert(v.begin(),i);
                    v.insert(v.begin()+1,j);
                    
                } 
            }
        }
        return v;
    }
};