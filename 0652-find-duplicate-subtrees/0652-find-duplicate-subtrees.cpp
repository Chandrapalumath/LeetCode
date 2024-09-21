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
    vector<TreeNode*>fans;
    unordered_map<string,int>mpp;
    //Using the String mapping
    string ans(TreeNode* root){
        if(root==nullptr) return "";
        string aps=to_string(root->val)+"#"+ans(root->left)+"#"+ans(root->right);
        mpp[aps]++;
        if(mpp[aps]==2) fans.push_back(root);
        return aps;
    }
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        ans(root);
        return fans;
    }
};