class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int n1,n2,n3,n4;
        
        sort(nums.begin(),nums.end());
        
        return (nums[nums.size()-1]*nums[nums.size()-2])- (nums[0]*nums[1]); 
    }
};