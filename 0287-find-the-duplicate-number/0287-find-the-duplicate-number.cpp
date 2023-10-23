class Solution {
public:
    int findDuplicate(vector<int>& nums) {
     map<int,int> vis;
       
        for(int i=0;i<nums.size();i++){
            if(vis[nums[i]]){
                nums.clear();
                return nums[i];
            }
            vis[nums[i]]++;
        }
        return -1;    }
};