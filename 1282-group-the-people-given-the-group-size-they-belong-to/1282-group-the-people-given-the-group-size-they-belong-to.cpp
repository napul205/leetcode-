class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& gs) {
        vector<vector<int>> ans;
        
        vector<int> t[gs.size()+1];
        
        for( int i=0;i<gs.size();i++)
        {
            t[gs[i]].push_back(i);
            
            if(t[gs[i]].size()==gs[i])
            {
                ans.push_back(t[gs[i]]);
                t[gs[i]].clear();
            }
        }
return ans;
    }
};