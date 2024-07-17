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
    int arr[1001]={0};
    vector<TreeNode * >ans;
    TreeNode* inorder(TreeNode* root){
        if(root==nullptr) return root;
        root->left=inorder(root->left);
        root->right=inorder(root->right);
        if(arr[root->val]){
            if(root->left) ans.push_back(root->left);
            if(root->right) ans.push_back(root->right);
            return nullptr;
        }
        return root;
    }
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
        for(int i=0;i<to_delete.size();i++) arr[to_delete[i]]=1;
        root=inorder(root);
        if(root) ans.push_back(root);
        return ans;
    }
};