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
    
    TreeNode* sortedArrayToBSThelper(vector<int>& nums, int si, int ei) {

        if(si>ei){
            return NULL;          // ei=ending index , si=starting index
        }
        
        //find middle element from vector nums call recusion to get left and right child
        
        int mid= si+(ei-si)/2;
        
        TreeNode*root=new TreeNode(nums[mid]);
        
        root->left = sortedArrayToBSThelper(nums,si,mid-1);
        root->right = sortedArrayToBSThelper(nums,mid+1,ei);
        
        return root;
    }
    
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        
        return sortedArrayToBSThelper(nums,0,nums.size()-1);      
    
    }
    
    
};
