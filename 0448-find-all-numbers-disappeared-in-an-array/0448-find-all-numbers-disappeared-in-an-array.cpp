class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> st;
        for( int i=1;i<=nums.size();i++)
        {
            if(!binary_search(begin(nums),end(nums),i))
                st.push_back(i);
        }
        
        return st;
    }
};