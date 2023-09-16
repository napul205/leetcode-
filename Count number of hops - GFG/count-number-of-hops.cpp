//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to count the number of ways in which frog can reach the top.
    const int mod = 1000000007;
    long long countWays(int n)
    {
        vector<long long int >f(n+1,-1);
         f[0]=1;
         f[1]=1;
         f[2]=2;
        for(int i=3;i<n+1;i++){
            f[i]= (((f[i-1]%mod+f[i-2]%mod)%mod)%mod+f[i-3]%mod)%mod;
        }
        return f[n];
        
        // your code here
        
    }
};


//{ Driver Code Starts.
int main()
{
    //taking testcases
	int t;
	cin >> t;
	
	while(t--)
	{
	    //taking number of steps in stair
		int n;
		cin>>n;
		Solution ob;
		//calling function countWays()
		cout << ob.countWays(n) << endl;
	}
    
    return 0;
    
}

// } Driver Code Ends