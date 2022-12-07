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
    int rangeSumBSThelper(TreeNode* root, int low, int high,int sum) {
        if(!root->right && !root->left){
            if(root->val>=low && root->val<=high){
                sum=sum+root->val;
            }
            return sum;
        }
        if(root->val>=low && root->val<=high){
                sum=sum+root->val;
            }
        if(root->right){
            sum=rangeSumBSThelper(root->right,low,high,sum);
        }
        if(root->left){
            sum=rangeSumBSThelper(root->left,low,high,sum);
        }
        return sum;
    }
    
    int rangeSumBST(TreeNode* root, int low, int high) {
        int sum=0;
        sum=rangeSumBSThelper(root,low,high,sum);
        return sum;
    }
};
