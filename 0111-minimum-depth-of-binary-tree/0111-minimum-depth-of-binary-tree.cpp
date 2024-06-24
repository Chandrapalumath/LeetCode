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
    int height(TreeNode* root){
        if(root==nullptr) return 0;
        if(root->right!=nullptr && root->left!=nullptr) return 1+min(height(root->left),height(root->right));
        int l=height(root->left);
        int r=height(root->right);
        return max(l,r)+1;
    }
    int minDepth(TreeNode* root) {
        return height(root);
    }
};