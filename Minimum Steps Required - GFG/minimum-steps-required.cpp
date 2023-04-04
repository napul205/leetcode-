//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

int minSteps(string str) {
    // Write your code here.
    int n=str.size(),a=0,b=0;
    
    for( int i=0;i<n;i++)
    if(str[i]!=str[i-1])
    {
        if(str[i-1]=='a')
        a++;
        if(str[i-1]=='b')
        b++;
    }
    
    if(str[n-1]=='a')
        a++;
        if(str[n-1]=='b')
        b++;
        
        return min(a,b)+1;
    
}

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        cout << minSteps(str) << endl;
    }
}

// } Driver Code Ends