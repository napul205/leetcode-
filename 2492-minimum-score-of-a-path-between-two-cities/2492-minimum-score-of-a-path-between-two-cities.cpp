class Solution {
public:
    
    int bfs(int n,vector<vector<pair<int,int>>>& a)
    {
        vector<bool> v(n+1);
        queue<int> q;
        int an=numeric_limits<int>::max();
        
        q.push(1);
        
        v[1]=true;
        
        while(!q.empty())
        {
            int no=q.front();
            q.pop();
            
            for(auto& e: a[no])
            {
                an=min(an,e.second);
                if(!v[e.first])
                {
                    v[e.first]=true;
                    q.push(e.first);
                }
            }
            
        }
        return an;
        
    }
    int minScore(int n, vector<vector<int>>& roads) {
       vector<vector<pair<int,int>>> adj(n+1);
        for( auto ro:roads)
        {
            adj[ro[0]].push_back({ro[1],ro[2]});
            adj[ro[1]].push_back({ro[0],ro[2]});
        }
        return bfs(n,adj);
    }
};