class Solution {
public:
    int minimumSeconds(vector<int>& nums) {
        map<int, vector<int>> occ;
        map<int, int> mx;
        
        for (int i = 0; i < nums.size(); ++i) 
        {
            
            if (occ[nums[i]].size())
                mx[nums[i]] = max(mx[nums[i]], i - occ[nums[i]].back());
            
            occ[nums[i]].push_back(i);
        }
        
        int mn = 1e9;
        for (auto p : occ) {
                int rfl = nums.size() + p.second.front() - p.second.back();
                mx[p.first] = max(mx[p.first], rfl);
            mn = min(mn, mx[p.first]);
        }
        return mn / 2;
    }
};