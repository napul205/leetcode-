class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int,int> mp;
        
        for( int i=0;i<arr.size();i++)
        {
            mp[arr[i]]++;
        }
        int r=-1;
        
        for( auto m:mp)
        {
            if( m.first==m.second)
            {
                r=max(r,m.first);
            }

        }
        
        return r;
    }
};