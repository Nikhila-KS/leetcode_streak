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
   int height(TreeNode *r)
    {
        if(r==NULL)
        return 0;
        int l=height(r->left);
        int h=height(r->right);
        return 1+max(l,h);
    }
    bool isBalanced(TreeNode* r) 
    {
        if(r==NULL)                                            // abs- absolute function
        return true;
       return (abs(height(r->left)-height(r->right))<=1 && isBalanced(r->left)&&isBalanced(r->right));
        
    }
};