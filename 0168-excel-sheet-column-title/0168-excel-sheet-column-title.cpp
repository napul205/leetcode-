class Solution {
public:
    string convertToTitle(int n) {
        string s="";
        
        int i=0;
        while(n>0)
        {
            int y=n%26;
            
            if(y==0)
            {
                s=s+'Z';
                n=n/26-1;
            }
            else
            {
                s+=y-1+'A';
                n=n/26;
            }
        }
        
        reverse(s.begin(),s.end());
        return s;
    }
};