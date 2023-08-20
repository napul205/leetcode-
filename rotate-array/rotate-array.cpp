class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int i=k%nums.size();
        
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+i);
        reverse(nums.begin()+i,nums.end());
    }
};