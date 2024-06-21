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
    int c=0,t;
    void inorder(TreeNode* root){
        if(root==nullptr || c==1){
            return;
        }
        inorder(root->left);
        if(root->val!=t){
            c=1;
        }
        inorder(root->right);
    }
    bool isUnivalTree(TreeNode* root) {
        t=root->val;
        inorder(root);
        if(c==1) return false;
        return true;
    }
};