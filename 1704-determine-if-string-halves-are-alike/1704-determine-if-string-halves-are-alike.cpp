class Solution {
public:
    bool halvesAreAlike(string s) {
        map<int,int> mp,mp1;
        int c=0,c1=0;
        for(int i=0;i<s.size()/2;i++)
        {
            if(s[i]=='a'||s[i]== 'e'||s[i]== 'i'||s[i]== 'o'||s[i]== 'u'||s[i]== 'A'||s[i] =='E'||s[i]== 'I'||s[i]== 'O'||s[i]== 'U')
            {
                c++;
            }
        }
        
        for(int i=s.size()/2;i<s.size();i++)
        {
            if(s[i]=='a'||s[i]== 'e'||s[i]== 'i'||s[i]== 'o'||s[i]== 'u'||s[i]== 'A'||s[i] =='E'||s[i]== 'I'||s[i]== 'O'||s[i]== 'U')
            {
                c1++;
            }
        }
        
      if( c!=c1)
          return false;
        
      
        
       
        
        return true;
    }
};