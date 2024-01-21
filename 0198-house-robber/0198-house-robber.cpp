class Solution {
public:
    int rob(vector<int>& nums) {
        int temp1=0 ,temp2=0;

       for( int i=0;i<nums.size();i++)
       {
           int temp=max(nums[i]+temp1,temp2);
           temp1=temp2;
           temp2=temp;
       }
       return temp2;
    }
};