//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    int Count(vector<vector<int> >& matrix) {
        // Code here
    int row[]={0,0,1,-1,1,1,-1,-1};
       int col[]={1,-1,0,0,1,-1,1,-1};
       int c=0;
       int n=matrix.size();
       int m=matrix[0].size();
       for(int i=0;i<n;i++)
       {
           for(int j=0;j<m;j++)
           {
               if(matrix[i][j]==1)
               {
               int x=0;
               for(int k=0;k<8;k++)
               {
                   int nrow=i+row[k];
                   int ncol=j+col[k];
                   if(nrow<n && nrow>=0 && ncol<m && ncol>=0){
                   if(matrix[nrow][ncol]==0) x++;
                   }
               }
               if(x%2==0 && x!=0) c++;
               }
           }
       }
       return c;
       
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>> matrix(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> matrix[i][j];
			}
		}
		Solution ob;
		int ans = ob.Count(matrix);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends