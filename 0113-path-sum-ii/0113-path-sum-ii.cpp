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
    void inorder(TreeNode* root, int targetSum,vector<int>&path,vector<vector<int>>&ans){
        if(root==nullptr) return;
        if(root->val==targetSum && root->left==nullptr && root->right==nullptr){
            path.push_back(root->val);
            ans.push_back(path);
            path.pop_back();
            return;
        }
        path.push_back(root->val);
        inorder(root->left,targetSum-root->val,path,ans);
        inorder(root->right,targetSum-root->val,path,ans);
        path.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        if(root==nullptr) return {};
        vector<vector<int>>ans;
        vector<int>path;
        inorder(root,targetSum,path,ans);
        return ans;
    }
};