//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    bool makePalindrome(int n,vector<string> &arr){
        // Code here
        map<string,int>m1;
        map<string,int>m2;
        string str;
        for(int i=0;i<n;i++)
        {
            m1[arr[i]]++;
            string str=arr[i];
            reverse(str.begin(),str.end());
            m2[str]++;
        }
    for(int i=0;i<n;i++)
    {
        if(m1[arr[i]]!=m2[arr[i]])
        {
            return false;
        }
    }
    return true;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        if(ob.makePalindrome(n,arr)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
// } Driver Code Ends