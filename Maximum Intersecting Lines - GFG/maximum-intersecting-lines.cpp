//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int maxIntersections(vector<vector<int>> a, int n) {
        // Code here
        vector<pair<int,int>> v(2*n);
        for(int i=0;i<n;i++){
            v[i].first=a[i][0];
            v[i].second=1;
            v[i+n].first=a[i][1];
            v[i+n].second=-1;
        }
        sort(v.begin(),v.end());
        int mx=INT_MIN;
        for(int i=1;i<2*n;i++){
            if(v[i-1].first==v[i].first and v[i-1].second <v[i].second){
            swap(v[i-1].second,v[i].second);
            i-=2;
            }
        }
        for(int i=1;i<2*n;i++){
           // if(v[i-1].first==v[i].first and v[i-1].second <v[i].second)swap(v[i-1].second,v[i].second);
            v[i].second=v[i].second+v[i-1].second;
            
           // cout<<v[i].second<<" ";
        }
        for(int i=0;i<2*n;i++){
           // if(v[i-1].first==v[i].first and v[i-1].second <v[i].second)swap(v[i-1].second,v[i].second);
            
            mx=max(mx,v[i].second);
           // cout<<v[i].second<<" ";
        }
        
        return mx;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<vector<int>> mat(N, vector<int>(2));
        for (int j = 0; j < 2; j++) {
            for (int i = 0; i < N; i++) {
                cin >> mat[i][j];
            }
        }
        Solution obj;
        cout << obj.maxIntersections(mat, N) << endl;
    }
}
// } Driver Code Ends