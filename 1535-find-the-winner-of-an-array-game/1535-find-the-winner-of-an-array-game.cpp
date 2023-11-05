class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int ans=0,n=arr.size();
        int s=0,c=arr[0];
        for( int i=1;i<arr.size();i++)
        {
            if(arr[i]<c)
                s++;
            else
            {
                if(s>=k)
                    return c;
                c=arr[i];
                s=1;
            }
        }
        return c;
    }
};