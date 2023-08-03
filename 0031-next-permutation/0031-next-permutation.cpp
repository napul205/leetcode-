class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        if( nums.size()<=1)
            return;
        int i=nums.size()-2;
        while(i>=0 && nums[i]>=nums[i+1])
            i--;
        
        if(i>=0)
        {
            int j=nums.size()-1;
            while(nums[j]<=nums[i])
                j--;
            swap(nums,i,j);
        }
        
        rever(nums,i+1,nums.size()-1);
    }
    void swap(vector<int>& A,int i,int j)
    {
        int temp=A[i];
        A[i]=A[j];
        A[j]=temp;
    }
    
    void rever(vector<int>& a,int i,int j)
    {
        while(i<j)
            swap(a,i++,j--);
    }
};