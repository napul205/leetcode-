/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> g;
    void t(TreeNode* root)
    {
        if(root==NULL)
            return ;
        
        t(root->left);
        
        g.push_back(root->val);
        
        t(root->right);
            
    }
    int findSecondMinimumValue(TreeNode* root) {
        set<int> st;
        t(root);
        
        for(auto it:g)
            st.insert(it);
        
        vector<int> v;
        for( auto it:st)
        {
            v.push_back(it);
        }
        sort(v.begin(),v.end());
        
        if(v.size()<2)
            return -1;
        
        
        return v[1];
    }
};