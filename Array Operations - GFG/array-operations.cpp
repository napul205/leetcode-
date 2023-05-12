//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int arrayOperations(int n, vector<int> &arr) {
        // code here
int ans=0,i=0,zeroCnt=0;
        while(i<n){
            while(i<n && arr[i]==0)zeroCnt++,i++;
            while(i<n && arr[i]!=0)i++;
            while(i<n && arr[i]==0)zeroCnt++,i++;
            ans++;
        }
        if(zeroCnt==0)return -1;
        if(zeroCnt==n)return 0;
        return ans;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        
        
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        Solution obj;
        int res = obj.arrayOperations(n, arr);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends