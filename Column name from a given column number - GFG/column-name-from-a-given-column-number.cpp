//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    string colName (long long int n)
    {
        // your code here
        string ans="";
        while(n>0)
        {
            int h=n%26;
  
            if(h==0)
            {
                ans=ans+'Z';
                n=(n/26)-1;
   
            }
            else
            {

                ans+=(h-1)+'A';
                n=(n/26);
                
            }
        }
        
        reverse(ans.begin(),ans.end());
        
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
	{
		long long int n; cin >> n;
		Solution ob;
		cout << ob.colName (n) << '\n';
	}
}

// } Driver Code Ends