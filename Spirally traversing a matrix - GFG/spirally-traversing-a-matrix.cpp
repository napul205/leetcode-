//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > arr, int r, int c) 
    {
        // code here 
        int t=0,b=r-1,l=0,a=c-1;
        int dir=0;
        vector<int> ans;
        
        while(t<=b && l<=a)
        {
            if(dir==0)
            {
                for( int i=l;i<=a;i++)
                ans.push_back(arr[t][i]);
                
                dir=1;
                t++;
            }else
            {
                if(dir==1)
                {
                    for( int i=t;i<=b;i++)
                    ans.push_back(arr[i][a]);
                    a--;
                    dir=2;
                }
                else
                {
                    if(dir==2)
                    {
                        for( int i=a;i>=l;i--)
                        ans.push_back(arr[b][i]);
                        dir=3;
                        b--;
                    }
                    else
                    if(dir==3)
                    {
                        for( int i=b;i>=t;i--)
                        ans.push_back(arr[i][l]);
                        l++;
                        dir=0;
                    }
                }
            }
            
        }
        return ans;
       
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends