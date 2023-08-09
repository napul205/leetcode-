class Solution {
public:
    int countp(vector<int>& nums,int mid)
    {
        int count=0,ind=0;
        
        while(ind<nums.size()-1)
        {
            if(nums[ind+1]-nums[ind]<=mid)
            {
                count++;
                ind++;
            }
            ind++;
        }
        return count;
    }
    int minimizeMax(vector<int>& nums, int p) {
        int n=nums.size()-1;
        int re=-1;
        sort(nums.begin(),nums.end());
        
        int left=0;
        int right=nums[n]-nums[0];
        
        while(left<=right)
        {
            int mid=(left+right)/2;
            if( countp(nums,mid)>=p)
            {
                re=mid;
                right=mid-1;
                
            }
            else
                left=mid+1;
        }
        return re;
        
    }
};