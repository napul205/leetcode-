class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        vector<int>::iterator it;
        
        for(int i=0;i<matrix.size();i++){
       
            it=find (matrix[i].begin(), matrix[i].end(), target);
        
            if(it != matrix[i].end())
                return true;
        }
        return false;
    }
};