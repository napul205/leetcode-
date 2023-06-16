//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
          unordered_map<int,int> mp1,mp2;
    long long find(int pos,int index,vector<int> &temp,vector<vector<long long>> &dp,int indication){
        if(index==temp.size())return 0;
        
        if(dp[index][indication]!=-1)return dp[index][indication];
        
        long long one=0,two=0;
        //leftmost position of present type
        int left=mp1[temp[index]];
        //rightmost position of present type
        int right=mp2[temp[index]];
        //if we go left first
        one = abs(pos-left)+abs(left-right)+find(right,index+1,temp,dp,1);
        //after completing we have to come at 0;
        if(index==temp.size()-1)one+=abs(right-0);
        //if we go right first
        two = abs(pos-right)+abs(left-right)+find(left,index+1,temp,dp,0);
        //after completing we have to come at 0;
        if(index==temp.size()-1)two+=abs(left-0);
        
        return dp[index][indication]= min(one,two);
    }
  
  
    long long minTime(int n, vector<int> &locations, vector<int> &types) {
        // code here
        //finding max element 
        int maxi=*max_element(types.begin(),types.end());
        
        vector<int> chk(maxi+1,0);
        //finding leftmost and rightmost position of particular type
        for(int i=0;i<n;++i){
           chk[types[i]]=1;  
           
           if(mp1.find(types[i])==mp1.end()){
               mp1[types[i]]=locations[i];
               mp2[types[i]]=locations[i];
           }else{
               mp1[types[i]]=min(mp1[types[i]],locations[i]);
               mp2[types[i]]=max(mp2[types[i]],locations[i]);
           }
        }
         
         
         vector<int> temp;
         //inserting unique types in temp
         for(int i=0;i<maxi+1;++i){
             if(chk[i]==1)
              temp.push_back(i);
              
              
         }
         
        vector<vector<long long>> dp(temp.size(),vector<long long> (2,-1)); 
        
        return find(0,0,temp,dp,0);
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        
        
        vector<int> locations(n);
        for(int i=0;i<n;i++){
            cin>>locations[i];
        }
        
        
        vector<int> types(n);
        for(int i=0;i<n;i++){
            cin>>types[i];
        }
        
        Solution obj;
        long long res = obj.minTime(n, locations, types);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends