class Solution {
public:
    
bool cp(string& s1, string& s2){
    if(s1.size() != s2.size() + 1) 
        return false;
    
    int first = 0;
    int second = 0;
    
    while(first < s1.size()){
        if(second < s2.size() && s1[first] == s2[second]){
            first ++;
            second ++;
        }
        else first ++;
    }
    if(first == s1.size() && second == s2.size()) 
        return true;
    else return false; 
}
    
    int longestStrChain(vector<string>& words) {
        int n=words.size();

  sort(words.begin(), words.end(), [](const string& a, const string& b) { return a.size() < b.size(); });
vector<int> dp(n,1);
        int m=1;
  for (int i=0;i<n;i++) {
       for( int pr=0;pr<=i-1;pr++)
       {
           if(cp(words[i],words[pr]) && 1+dp[pr]>dp[i])
               dp[i]=1+dp[pr];
       }
      if(dp[i]>m)
          m=dp[i];
  }
        return m;
    }
};