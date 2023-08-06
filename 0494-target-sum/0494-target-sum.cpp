class Solution {
public:
    int count=0;
    
    int findTargetSumWays(vector<int>& nums, int target) {
        cal(nums,0,0,target);
        return count;
    }
    
    void cal(vector<int> &nums,int i,int j,int t)
    {
        if(i==nums.size()){
            if(j==t)
                count++;
        }
        else
           {
                cal(nums,i+1,j+nums[i],t);
                cal(nums,i+1,j-nums[i],t);
            }
        
    }
};