class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        vector<vector<long long>> v(2, vector<long long>(nums.size() + 1, 0));

        for (int i = 0; i < nums.size(); i++) {
            v[0][i + 1] = max(v[0][i], v[1][i] - nums[i]);
            v[1][i + 1] = max(v[1][i], v[0][i] + nums[i]);
        }

        return max(v[0][nums.size()], v[1][nums.size()]);
    }
};
