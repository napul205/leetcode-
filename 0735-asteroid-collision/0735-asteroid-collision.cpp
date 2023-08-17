class Solution {
public:
    vector<int> asteroidCollision(vector<int>& ast) {
        int ne=0;
        stack<int> st;
        vector<int> v;
        
         for( int i=0;i<ast.size();i++)
         {
            int flag=1;
             
             while(!st.empty() && (st.top()>0 && ast[i]<0))
             {
                 if(abs(st.top())<abs(ast[i]))
                 {
                     st.pop();
                     continue;
                 }
                 else
                     if(abs(st.top())==abs(ast[i]))
                         st.pop();
                 
                 flag=0;
                 break;
             }
             if(flag)
                 st.push(ast[i]);
                
         }
        
        
        while(!st.empty())
        {
            v.push_back(st.top());
            st.pop();
        }
        reverse(v.begin(),v.end());
        return v;
    }
};