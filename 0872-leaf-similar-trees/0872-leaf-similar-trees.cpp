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
 */                 //.old version
class Solution {
public:
    bool leafseq(TreeNode*root,vector<int>&seq){
        if(root->left==nullptr && root->right==nullptr){
            seq.push_back(root->val);
            return 1;
        }
        if(root->left!=nullptr){
            leafseq(root->left,seq);
        }
        if(root->right!=nullptr){
            leafseq(root->right,seq);
        }
        return 1;
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        if(root1==nullptr && root2==nullptr){
            return true;
        }
        vector<int>seq1;
        leafseq(root1,seq1);
        vector<int>seq2;
        leafseq(root2,seq2);
        if(seq1.size()!=seq2.size()){
            return false;
        }
        while(seq1.size()!=0 && seq2.size()!=0){
            if(seq1.back()!=seq2.back()){
                return false;
            }
            seq1.pop_back();
            seq2.pop_back();
        }
        return true;
    }
};