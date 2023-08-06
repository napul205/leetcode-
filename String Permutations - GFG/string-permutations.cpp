//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    //Complete this function
    
    vector<string> permutation(string S)
    {
        //Your code here
        vector<string> ans;
        solve(S,0,ans);
        sort(ans.begin(),ans.end());
        return ans;
    }
    
    void solve(string s,int j,vector<string> &ans)
    {
        if(j>=s.size())
        {
            ans.push_back(s);
            return ;
        }
        
        for( int i=j;i<s.size();i++)
        {
            swap(s[i],s[j]);
            solve(s,j+1,ans);
            swap(s[i],s[j]);
        }
        
        return;
        
    }
};

//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string S;
		cin>>S;
		Solution ob;
		vector<string> vec = ob.permutation(S);
		for(string s : vec){
		    cout<<s<<" ";
		}
		cout<<endl;
	
	}
	return 0;
}
// } Driver Code Ends