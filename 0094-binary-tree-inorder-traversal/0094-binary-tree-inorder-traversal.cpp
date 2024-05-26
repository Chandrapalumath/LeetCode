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
    vector<int>s;
    void inorder(TreeNode* root){
        if(root==nullptr){
            return;
        }
        inorder(root->left);
        s.push_back(root->val);
        inorder(root->right);
        
    }
    
    vector<int> inorderTraversal(TreeNode* root) {
        
        if(root==nullptr){
            return s;
        }
        if(root->left==nullptr && root->right==nullptr){
            s.push_back(root->val);
            return s;
        }
        inorder(root);
        return s;
    }
};