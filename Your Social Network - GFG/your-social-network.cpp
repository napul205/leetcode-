//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void dfs(int idx, vector<int> adj[], set<tuple<int,int,int>> &st, int count,int src){
        
        if(idx==1){
            return;
        }
        
        count++;
        
        for(auto it:adj[idx]){
            st.insert(make_tuple(src,it,count));
            dfs(it,adj,st,count,src);
        }
        
    }
  
    string socialNetwork(int arr[], int N) {
        
        vector<int> adj[N+1];
        for(int i=0;i<N-1;i++){
            adj[i+2].push_back(arr[i]);
        }
        
        // vector<int> vis(N+1,0);
        string s="";
        set<tuple<int,int,int>> st;
        int count=0;
        
        for(int i=2;i<=N;i++){
            dfs(i,adj,st,count,i); 
        }
        
        for(auto &it:st){
            int u = get<0>(it);
            int v = get<1>(it);
            int times = get<2>(it);
            s+= to_string(u)+" "+to_string(v)+" "+to_string(times)+" ";
        }
        
        return s;
        
    }};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        
        int arr[N-1];
        for(int i=0; i<N-1; i++)
            cin>>arr[i];

        Solution ob;
        cout << ob.socialNetwork(arr,N) << endl;
    }
    return 0;
}
// } Driver Code Ends