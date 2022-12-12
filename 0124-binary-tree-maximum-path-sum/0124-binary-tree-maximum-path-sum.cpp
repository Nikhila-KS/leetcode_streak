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
    int find(TreeNode* root,int& res)
    {
        if(!root)
            return 0;

        int l=find(root->left,res);
        int r=find(root->right,res);

        l = l>0 ? l : 0;
        r = r>0 ? r : 0;

        res = max(res,root->val+l+r);
        
        return root->val + max(l,r);
    }

    int maxPathSum(TreeNode* root) {
        int res= INT_MIN;
        find(root,res);
        return res;
    }
};