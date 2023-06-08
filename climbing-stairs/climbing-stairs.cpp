class Solution {
public:
    int climbStairs(int n) {
        int pre=0,p1=1;
        for(int i=0;i<n;i++)
        {
            int cu=pre+p1;
            pre=p1;
            p1=cu;
        }
        return p1;
    }
};