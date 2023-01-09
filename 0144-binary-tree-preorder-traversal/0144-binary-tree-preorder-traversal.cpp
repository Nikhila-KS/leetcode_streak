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
    void preorderTraversalhelp(TreeNode* root,vector<int>& ans){
        if(root==nullptr){
            return;
        }
        ans.push_back(root->val);
        preorderTraversalhelp(root->left,ans);
        preorderTraversalhelp(root->right,ans);
        return;
    }
    vector<int> preorderTraversal(TreeNode* root) {
       vector<int> ans;
       preorderTraversalhelp(root,ans);
        return ans;
    }
};