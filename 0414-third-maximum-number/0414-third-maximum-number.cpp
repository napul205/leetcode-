class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> t;
        
        for( int i=0;i<nums.size();i++)
        {
            t.insert(nums[i]);
        }
        
        vector<int> n;
        
        for( auto it : t)
        {
            n.push_back(it);
        }
        sort(n.begin(),n.end(),greater<int>());
        if(n.size()>=3)
            return n[2];
        
        if(n.size()==1)
            return n[0];
        
        if(n.size()==2)
            return n[0];
        return 0;
    }
};