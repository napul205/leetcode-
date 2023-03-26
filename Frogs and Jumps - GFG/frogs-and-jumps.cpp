//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int unvisitedLeaves(int n, int leaves, int frogs[]) {
        // Code here
       vector<int> v(leaves+1);
       for( int i=0;i<n;i++)
       {
           if( frogs[i] <=leaves && !v[frogs[i]])
           {
               for( int j=0;j<=leaves;j+=frogs[i])
               v[j]=1;
           }
           
       }
       
       int count=0;
       for( int i=1;i<=leaves;i++)
       if(!v[i])
       count++;
       
       return count;
    }
};


//{ Driver Code Starts.


int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, leaves;
        cin >> N >> leaves;
        int frogs[N];
        for (int i = 0; i < N; i++) {
            cin >> frogs[i];
        }

        Solution ob;
        cout << ob.unvisitedLeaves(N, leaves, frogs) << endl;
    }
}
// } Driver Code Ends