class Solution {
public:
    string reverseWords(string s) {
        string wr="";
        string temp="";
        for( int i=0;i<s.size();i++)
        {
            while(i<s.size() && s[i]!=' ')
            {
                temp+=s[i];
                i++;
            }
            
            
           if(temp!="")
            {
                
                    if( wr!="")
                {
                    wr=temp+" "+wr;
                }
                else
                    wr=temp;
            }
            temp="";
        }
        
        
        return wr;
        
    }
};