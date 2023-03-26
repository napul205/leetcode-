class Solution {
public:
    vector<int> leftRigthDifference(vector<int>& nums) {
        vector<int> left;
        vector<int> right(nums.size(),0);
        vector<int> ans;
        left.push_back(0);
        for( int i=0;i<nums.size()-1;i++)
        {
            int sum=left[i]+nums[i];
            left.push_back(sum);
        }
        
        for( int i=nums.size()-1;i>0;i--)
        {
          int sum=right[i]+nums[i];
            right[i-1]=sum;
        }
        
        for( int i=0;i<nums.size();i++)
        {
            ans.push_back(abs(left[i]-right[i]));
            
        }
        return ans;
    }
};