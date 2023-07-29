class Solution {
public:
    vector<pair<int, int>> serves{{100, 0}, {75, 25}, {50, 50}, {25, 75}};
    vector<vector<double>> t;
    
    
    double solve(double a, double b)
    {
          
        
        if(a<=0 && b<=0)
            return 0.5;
        
        if(a<=0)
            return 1.0;
        
        if(b<=0)
            return 0.0;
        
        if(t[a][b] != -1.0)
            return t[a][b];
        
        double pro=0.0;
        
        for( auto &p:serves)
        {
            double as=p.first;
            double bs=p.second;
            
            pro+=0.25*solve(a-as,b-bs);
        }
        
        return t[a][b]=pro;
        
        
    }
    double soupServings(int n) {
        if(n>5000)
            return 1.0;
        
        t.resize(n+1, vector<double>(n+1, -1.0));
        return solve(n, n);
    }
};