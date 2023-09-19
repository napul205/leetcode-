class Solution {
public:
    int findDuplicate(vector<int>& nums) {
     bool vis[100005]={0};
       
        for(int i=0;i<nums.size();i++){
            if(vis[nums[i]]){
                nums.clear();
                return nums[i];
            }
            vis[nums[i]]=1;
        }
        return -1;    }
};