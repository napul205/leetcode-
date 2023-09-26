class Solution {
public:
    
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int sum = 0;
        for(int indx = 0; indx < nums.size(); indx++){
            if(__builtin_popcount(indx) == k){
                sum += nums[indx];
            }
        }
        return sum;
    }
};