class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int total=0;
        // if(nums[0]>x && nums[nums.size()-1]>x)
        //     return -1;
        
        for( int num: nums)
        {
            total+=num;
        }
        
        
        
        int l=0;
        int cu=0;
        int mx=-1;
        
        for( int r=0;r<nums.size();r++)
        {
            cu+=nums[r];
            
            while(l<=r && cu>total -x)
            {
                
                cu-=nums[l];
                l++;
            }
            if( cu==total-x)
                mx=max(mx,r-l+1);
        }
        
        return (mx!=-1) ? nums.size()-mx: -1;
    }
};