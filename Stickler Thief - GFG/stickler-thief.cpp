//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

// } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum money the thief can get.
    int l(int arr[],int ind,int dp[])
    {
        if(ind<0)
        return 0;
        
        if( dp[ind]!=-1)
        return dp[ind];
        
        int p=arr[ind]+l(arr,ind-2,dp);
        int np=l(arr,ind-1,dp);
        
        return dp[ind]=max(p,np);
    }
    int FindMaxSum(int arr[], int n)
    {
        // Your code here
        int dp[n];
        for( int i=0;i<n;i++)
        dp[i]=-1;
        
        return l(arr,n-1,dp);
    }
};

//{ Driver Code Starts.
int main()
{
    //taking total testcases
	int t;
	cin>>t;
	while(t--)
	{
	    //taking number of houses
		int n;
		cin>>n;
		int a[n];
		
		//inserting money of each house in the array
		for(int i=0;i<n;++i)
			cin>>a[i];
		Solution ob;
		//calling function FindMaxSum()
		cout<<ob.FindMaxSum(a,n)<<endl;
	}
	return 0;
}

// } Driver Code Ends