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
    int pt(TreeNode* root){
        if(root==nullptr) return 0;
        int l=pt(root->left);
        int r=pt(root->right);
        return max(l,r)+1;
    }
    void inorder(TreeNode* root,vector<vector<int>>&ans,int i){
        if(root==nullptr) return;
        ans[i].push_back(root->val);
        inorder(root->left,ans,i+1);
        inorder(root->right,ans,i+1);
    }
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root==nullptr) return {};
        int j=pt(root);
        vector<vector<int>>ans(j);
        inorder(root,ans,0);
        for(int i=0;i<ans.size();i++) if(i%2!=0 && i!=0) reverse(ans[i].begin(),ans[i].end());
        return ans;
    }
};