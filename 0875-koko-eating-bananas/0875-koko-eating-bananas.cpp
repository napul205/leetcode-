class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int l=1;
         int r=*max_element(piles.begin(),piles.end());
        
        while(l<r)
        {
            int mid=(l+r)/2;
            
            int sum=0;
            
            for(int &p:piles)
            {
                sum+=p/mid;
                
                if(p%mid!=0) 
                    sum++;
               
            }
             if(sum<=h)
                    r=mid;
                else
                    l=mid+1;
        }
        return l;
    }
};