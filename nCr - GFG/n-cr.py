#User function Template for python3

class Solution:
    def nCr(self, n, r):
        # code here
        p,d=1,1
        mod=pow(10,9)+7
        while(r):
            p*=n
            n-=1
            d*=r
            r-=1
        x=p//d
        return int (x%mod)


#{ 
 # Driver Code Starts
#Initial Template for Python 3

import sys
sys.setrecursionlimit(10**6)

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        n, r = [int(x) for x in input().split()]
        
        ob = Solution()
        print(ob.nCr(n, r))
# } Driver Code Ends