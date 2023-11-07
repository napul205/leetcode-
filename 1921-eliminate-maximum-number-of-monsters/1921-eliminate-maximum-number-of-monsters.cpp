class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        int ans=0;
        vector<float> v;
        for( int i=0;i<dist.size();i++){
            v.push_back((float) dist[i]/speed[i]);
        }
        sort(v.begin(),v.end());
        
        for( int i=0;i<v.size();i++)
        {
            if(v[i]<=i) 
                break;
            
            ans++;
        }
        return ans;
    }
};