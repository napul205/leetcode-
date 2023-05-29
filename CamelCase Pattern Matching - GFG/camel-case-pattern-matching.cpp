//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<string> CamelCase(int n, vector<string> Dictionary, string Pattern) {
        // code here
          vector<string> ans;
        for(int i=0;i<n;i++){
            string str="";
            for(int j=0;j<Dictionary[i].length();j++){
                if(Dictionary[i][j] >= 65 and Dictionary[i][j] <= 90)
                    str+=Dictionary[i][j];
            }
            if(str[0]==Pattern[0]){
                if(str.find(Pattern) != string :: npos)
                    ans.push_back(Dictionary[i]);
            }
        }
        if(ans.size() == 0)
            return {"-1"};
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<string> Dictionary(N);
        for (int i = 0; i < N; i++) cin >> Dictionary[i];
        string Pattern;
        cin >> Pattern;
        Solution ob;
        vector<string> ans = ob.CamelCase(N, Dictionary, Pattern);
        sort(ans.begin(), ans.end());
        for (auto u : ans) cout << u << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends