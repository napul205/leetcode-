class Solution {
public:
    multimap<int, int> sort(map<int, int>& M)
    {
    multimap<int, int> MM;
 
    for (auto& it : M) {
        MM.insert({ it.second, it.first });
    }
        cout<<"n"<<endl;
         for (auto& it : MM) {
        cout << it.second << ' ' << it.first << endl;
    }
 
    return MM;
    
}
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        map<int,int> mp;
        
        for( int i=0;i<mat.size();i++)
        {
            int n=0;
            for( int j=0;j<mat[0].size();j++)
            {
                if(mat[i][j]==1)
                    n++;
            }
            mp[i]=n;
            cout<<i<<" "<<mp[i]<<endl;
        }
        
        multimap<int,int> ans=sort(mp);
        
        vector<int> c;
        int h=0;
        for( auto it: ans)
        {
            if(h<k)
            c.push_back(it.second);
            
            h++;
        }
        
        return c;
        
    }
};