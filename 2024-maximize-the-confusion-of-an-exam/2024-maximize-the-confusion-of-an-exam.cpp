class Solution {
public:
    
    int solve(string s,char c,int k)
    {
        int left=0,res=0,n=s.length(),cnt=0;
        for( int i=0;i<n;i++)
        {
            if(s[i]==c)
                cnt++;
            while(cnt>k){
                if(s[left]==c)
                    cnt--;
                left++;
            }
            res=max(i-left+1,res);
        }
        
        return res;
    }
    
    
    int maxConsecutiveAnswers(string answerKey, int k) {
        return max(solve(answerKey,'F',k),solve(answerKey,'T',k));
    }
};