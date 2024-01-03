class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int la=0,ans=0;
        
        for( string s:bank)
        {
            int count=0;
            for(char c:s)
            {
                if(c=='1')
                    count++;
            }
            
            if(count!=0)
            {
                ans+=(la*count);
                la=count;
            }
        }
        return ans;
    }
};