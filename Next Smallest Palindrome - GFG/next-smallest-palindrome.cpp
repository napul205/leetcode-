//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	bool solve(vector<int>& arr, int num[])
    {
        for(int i=0; i<arr.size(); i++)
        {
            if(arr[i] > num[i]) return true;
            if(arr[i] < num[i]) return false;
        }
        
        return false;
    }
    
    void smallpalindrome(vector<int>& arr, int num[], int n)
    {
        for(int i=0; i<n/2; i++)
    {
        arr.push_back(num[i]);
    }
    
    int half = arr.size();
    if(n%2) arr.push_back(num[n/2]);
    
    for(int i=half-1; i>=0; i--)
    {
        arr.push_back(arr[i]);
    }
    }
    
    void calc(vector<int>& arr, int num[], int n)
    {
        int i = n/2, j = n/2;
    if(n%2 == 0) i--;
    
    int carry = 0, sum = 0, f = 1;
    
        while(i >= 0)
    {
        sum = arr[i]+carry;
        carry = sum/10;
       
        if((arr[i] < num[i] || arr[i] < num[j]) && f)
        {
            sum = min(num[i], num[j])+1;
            carry = sum/10;
            
            arr[i] = sum%10;
            arr[j] = sum%10;
            
            f = 0;
        }
        else if(arr[j] <= num[j] && f)
        {
            sum = num[j]+1;
            carry = sum/10;
            
            arr[i] = sum%10;
            arr[j] = sum%10;
            
            f = 0;
        }
        else
        {
            arr[i] = sum%10;
            arr[j] = sum%10;
 
        }
       
        i--, j++;
    }
    
    if(carry)
    {
        arr[0] = 1;
        for(int i=1; i<n; i++) arr[i] = 0;
        arr.push_back(1);
    }
    }
 
vector<int> generateNextPalindrome(int num[], int n) 
{
    vector<int>arr;
    
    smallpalindrome(arr, num, n);
   
    bool check = solve(arr, num);
    if(check) return arr;
    
    calc(arr, num, n);
    return arr;
}

};

//{ Driver Code Starts.


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int num[n];
        for (int i = 0; i < n; i++) {
            cin >> num[i];
        }
        Solution ob;
        auto ans = ob.generateNextPalindrome(num, n);
        for (auto x : ans) {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends