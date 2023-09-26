class Solution {
public:
    int h(int n)
    {
        int c=0;
        while(n>0)
        {
            
            c+=n&1;
            n=n>>1;
        }
        cout<<c<<" ";
        return c;
    }
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int sum = 0;
        for(int indx = 0; indx < nums.size(); indx++){
            if(h(indx) == k){
                sum += nums[indx];
            }
        }
        return sum;
    }
};