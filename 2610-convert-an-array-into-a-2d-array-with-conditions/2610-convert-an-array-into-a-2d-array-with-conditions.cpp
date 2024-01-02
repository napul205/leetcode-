class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<int> f(nums.size()+1);
        
        vector<vector<int>> ans;
        
        for( int c:nums)
        {
            if(f[c]>=ans.size()) //here it will check how many time 
                ans.push_back({});
            
            ans[f[c]].push_back(c);
            f[c]++;
        }
        
        return ans;
        
    }
};