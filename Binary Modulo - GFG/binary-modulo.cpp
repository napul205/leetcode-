//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
        int modulo(string s,int m)
        {
            //code here
             long long int k=0 ;
            long long int p=1 ;
            int n = s.size()   ;
            for (int j=n-1;j>=0;j--)
            {
                 k=(k+(s[j]-'0')*p)%m ; 
                 p=(p*2)%m ;
            } 
            int r=k%m ;
            return(r);
        }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        int m;
        cin>>s>>m;
        Solution a;
        cout<<a.modulo(s,m)<<endl;
    }
    return 0;
}
// } Driver Code Ends