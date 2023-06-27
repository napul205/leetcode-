class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
       int n = nums.size();
        long long int mul=1;
        int z=0;
        vector<int> output;
        for(int i=0; i<n; i++){
            if(nums[i]!=0)
                mul*=nums[i];
            else
                z++;
                
        }
        
        for( int i=0;i<n;i++)
        {
            if(nums[i]==0)
                if(z==1)
                output.push_back(mul);
                else
                    output.push_back(0);
            else
            {
                if(z>=1)
                    output.push_back(0);
                else
                output.push_back(mul/nums[i]);
            }
        }
        return output;
    }
};