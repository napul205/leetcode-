class Solution {
public:
    bool canPlaceFlowers(vector<int>& fl, int n) {
        int count=0;
        for( int i=0;i<fl.size();i++)
        {
            if(fl[i]==0)
            {
                bool l=(i==0) || fl[i-1]==0;
                bool r=(i==fl.size()-1)|| fl[i+1]==0;
                
                if( l&&r)
                {    fl[i]=1;
                        count++;
                }
                
            }
        }
        if( count >=n)
            return true;
        else
            return false;
        //return count;
    }
};