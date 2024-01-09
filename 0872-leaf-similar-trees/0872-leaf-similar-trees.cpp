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
    vector<int> v;
    void tr(TreeNode* r )
    {
        if( r==NULL)
            return;
        
        tr(r->left);
        if(r->left==NULL && r->right ==NULL)
        {
            v.push_back(r->val);
        }
        tr(r->right);
    }
   
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> t1,t2;
        
        tr(root1);
        t1=v;
        v.clear();
        tr(root2);
        t2=v;
        
       if(t1.size()!=t2.size())
            return false;
        
        for( int i=0;i<t1.size();i++)
        {
            if( t1[i]!=t2[i])
                return false;
        }
        
        return true;
    }
};