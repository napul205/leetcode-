//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    //Function to find minimum number of operations that are required 
    //to make the matrix beautiful.
    int findMinOpeartion(vector<vector<int> > a, int n)
    {
        // code here 
        int rsum,csum,tsum=0,mx=0;
        
        for( int i=0;i<n;i++)
        {
            rsum=0,csum=0;
            for( int j=0;j<n;j++)
            {
                rsum+=a[i][j];
                csum+=a[j][i];
                tsum+=a[i][j];
            }
            rsum=max(rsum,csum);
            mx=max(mx,rsum);
        }
        
        return mx*n-tsum;
    } 
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > matrix (n,vector<int>(n));
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>matrix[i][j];
        Solution ob;
        cout << ob.findMinOpeartion(matrix, n) << endl;
    }
    return 0;
}


// } Driver Code Ends