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
    void inorder(TreeNode* left,TreeNode* right,bool i){
        if(left==nullptr) return;
        if(i) swap(left->val,right->val);
        inorder(left->left,right->right,!i);
        inorder(left->right,right->left,!i);
    }
    TreeNode* reverseOddLevels(TreeNode* root) {
        inorder(root->left,root->right,true);
        return root;
    }
};