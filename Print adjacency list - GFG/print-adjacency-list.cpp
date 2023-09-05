//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to return the adjacency list for each vertex.
    vector<vector<int>> printGraph(int v, vector<pair<int,int>>e) {
        // Code here
        vector<int> adj[v];
        
        for( int i=0;i<e.size();i++)
        {
            adj[e[i].first].push_back(e[i].second);
            adj[e[i].second].push_back(e[i].first);
        }
        
        vector<vector<int>> ans;
        
        for(int i=0;i<v;i++)
        {
            vector<int>temp;
            for(int j=0;j<adj[i].size();j++){
            temp.push_back(adj[i][j]);
            }
            sort(temp.begin(),temp.end());
            ans.push_back(temp);
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<pair<int,int>>edges;
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            edges.push_back({u,v});
        }
        Solution obj;
        vector<vector<int>> adj = obj.printGraph(V, edges);
        for(int i=0;i<V;i++)
        {
            sort(adj[i].begin(),adj[i].end());
            for(auto it:adj[i])
                cout<<it<<" ";
            cout<<endl;
        }
    }
    return 0;
}
// } Driver Code Ends