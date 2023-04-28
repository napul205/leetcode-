class Solution {
public:
    bool isPalindrome(int x) {
          int re=0;
        if(x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }
        while(x>re)
        {
            re=re*10+x%10;
            x/=10;
        }
        return x==re|| x==re/10;
    }
};