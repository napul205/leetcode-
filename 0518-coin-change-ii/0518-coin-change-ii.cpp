class Solution {
public:
    vector<int> coins;
    vector<vector<int>> memo;
    int number(int i,int amount)
    {
        if(amount==0)
            return 1;
        
        if(i==coins.size())
            return 0;
        
        if(memo[i][amount]!=-1)
            return memo[i][amount];
        
        if(coins[i]>amount)
            return memo[i][amount]=number(i+1,amount);
        return memo[i][amount] =number(i,amount-coins[i])+number(i+1,amount);
        
        return memo[i][amount];
    }
    int change(int amount, vector<int>& coins) {
        this->coins=coins;
        memo= vector<vector<int>> (coins.size(),vector<int>(amount+1,-1));
        return number(0,amount);
    }
};