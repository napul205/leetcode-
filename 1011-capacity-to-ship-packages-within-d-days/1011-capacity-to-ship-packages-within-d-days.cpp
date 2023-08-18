class Solution {
public:
    bool fe(vector<int>& we,int cu,int days )
    {
        int d=1,c=0;
        for( int w:we)
        {
            c+=w;
            if(c>cu)
            {
                d++;
                c=w;
            }
        }
        return d<=days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int t=0,mx=0;
        for( int w:weights)
        {
            t+=w;
            mx=max(mx,w);
        }
        
        int l=mx,r=t;
        
        while(l<r)
        {
            int mid=(l+r)/2;
            
            if(fe(weights,mid,days))
                r=mid;
            else
                l=mid+1;
        }
        
        return l;
    }
};