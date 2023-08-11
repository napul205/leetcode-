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
    void tra(TreeNode* root)
    {
        if(root==NULL)
            return ;
        tra(root->left);
        g.push_back(root->val);
        tra(root->right);
        
    }
    int kthSmallest(TreeNode* root, int k) {
        tra(root);
        sort(g.begin(),g.end());
        return g[k-1];
    }
};