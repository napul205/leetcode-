class Solution {
public:
    int titleToNumber(string n) {
        int c=0;
        
        for( char it:n)
        {
           
            int t=it-'A'+1;
            
            c=c*26+t;
        }
        
        return c;
    }
};