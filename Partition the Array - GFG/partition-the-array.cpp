//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
    public:
int binarysearch(long long arr[], int low, int high, long long sum, long long temp){
        int mid,idx=-1;
        long long left,right,diff=INT_MAX;
        while(low<=high){
            mid=(low+high)/2;
            left=arr[mid]-temp;
            right=sum-arr[mid];
            if(abs(left-right)<diff){
                idx=mid;
                diff=abs(left-right);
            }
            if(left<right){
                low=mid+1;
            }
            else {
                high=mid-1;
            }
        }
        return idx;
    }
    long long minDifference(int n, vector<int> &arr) {
        // code here
        long long prefix[n];
        //prefix sum arr;
        prefix[0]=arr[0];
        for(int i=1; i<n; i++){
            prefix[i]=prefix[i-1]+arr[i];
        }
        
        long long  ans=INT_MAX, w,x,y,z;
        for(int i=2; i<n-1; i++){
            int idx=binarysearch(prefix,0,i-1,prefix[i-1],0);
            w=prefix[idx];
            x=prefix[i-1]-w;
            idx=binarysearch(prefix,i,n-1,prefix[n-1],prefix[i-1]);
            y=prefix[idx]-prefix[i-1];
            z= prefix[n-1]-prefix[idx];
            ans=min(ans,max({w,x,y,z})-min({w,x,y,z}));
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        vector<int> A(N);
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        Solution ob;
        long long ans = ob.minDifference(N, A);
        cout<<ans<<endl;
    }
    return 0;
} 
// } Driver Code Ends