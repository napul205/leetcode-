class Solution {
public:
    string convert(string s, int numRows) {
        
     vector <string> v(numRows);

    int n=s.length();
    int a=0;
    if(numRows==1){
        return s;
    }
    while(a<n){
    
    for(int i=0;i<numRows;i++){
        if(a<n){v[i].push_back(s[a]);
        a++;
        }else{
            break;
        }
    }
    for(int i=numRows-2;i>0;i--){
     if(a<n){
         v[i].push_back(s[a]);
     a++;
     }else{
         break;
     }
    }
    }
    string ans="";

    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            ans.push_back(v[i][j]);
        }
    }
    return ans;
    }
};