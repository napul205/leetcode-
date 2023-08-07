class Solution {
public:
   static bool sortbysec(const pair<int,int> &a,const pair<int,int> &b)
{
    return (a.second < b.second);
}
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<pair<int,int>> st;
        vector<int> v;
        map<int,int> mp;
        
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
            
        }
        
        for( auto at: mp)
        {
            st.push_back( make_pair(at.first,at.second) );
        }
        sort(st.begin(),st.end(),sortbysec);
            int j=st.size()-1;
            for( int i=0;i<k;i++)
            {
                v.push_back(st[j--].first);
            }
        
        return v;
    }
};