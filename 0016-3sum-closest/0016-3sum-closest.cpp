class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        std::sort(nums.begin(), nums.end());
        int n = nums.size();
        int mn = std::numeric_limits<int>::max();
        int ans = 0;
        
        for (int i = 0; i < n; ++i) {
            int s = i + 1;
            int e = n - 1;
            
            while (s < e) {
                int sm = nums[i] + nums[s] + nums[e];
                if (sm == target) {
                    return sm;
                }
                if (std::abs(target - sm) < mn) {
                    mn = std::abs(target - sm);
                    ans = sm;
                }
                if (sm < target) {
                    s++;
                } else {
                    e--;
                }
            }
        }
        
        return ans;
    
    }
};