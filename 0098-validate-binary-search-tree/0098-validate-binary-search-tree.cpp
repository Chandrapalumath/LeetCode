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
    bool isValidBST(TreeNode* root) {
        if(root->left==nullptr && root->right==nullptr){
            return true;
        }
        inorder(root);
        int n=s.size();
        for(int i=0;i<n-1;i++){
            if(s[i]>=s[i+1]){
                return false;
            }
        }
        return true;
    }
};
