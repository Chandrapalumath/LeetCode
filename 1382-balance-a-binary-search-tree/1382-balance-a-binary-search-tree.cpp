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
    vector<int>nums;
    void inorder(TreeNode* root) {
        if(root==nullptr) return;
        inorder(root->left);
        nums.push_back(root->val);
        inorder(root->right);
    }
    TreeNode* balance(int s,int e) {
        if(s>e) return nullptr;
        int mid=s+(e-s)/2;
        TreeNode *root=new TreeNode(nums[mid]);
        root->left=balance(s,mid-1);
        root->right=balance(mid+1,e);
        return root;
    }
    TreeNode* balanceBST(TreeNode* root) {
        inorder(root);
        int n=nums.size()-1;
        return balance(0,n);
    }
};