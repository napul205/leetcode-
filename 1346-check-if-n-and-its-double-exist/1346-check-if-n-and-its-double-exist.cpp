class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        set<int> st;
        for( int i=0;i<arr.size();i++)
        {
            st.insert(arr[i]);
        }
        
        for( int i=0;i<arr.size();i++)
        {
            if(arr[i]!=0 && st.find(arr[i]*2)!=st.end())
                return true;
        }
        
        return count(arr.begin(),arr.end(),0)>1;
    }
};