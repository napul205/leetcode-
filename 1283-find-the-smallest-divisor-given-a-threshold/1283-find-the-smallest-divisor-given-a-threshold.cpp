class Solution {
public:
    int sumd(vector<int> &arr,int d)
    {
        int sum=0;
        int n=arr.size();
        for( int i=0;i<n;i++)
            sum=sum+ceil((double)(arr[i])/(double)(d)  );
        
        return sum;
    }
    int smallestDivisor(vector<int>& arr, int threshold) {
        int low=1,high=*max_element(arr.begin(),arr.end());
        while(low<=high)
        {
            int mid=(high+low)/2;
            if(sumd(arr,mid)<=threshold)
            {
                high=mid-1;
            }
            else
                low=mid+1;
        }
        return low;
    }
};