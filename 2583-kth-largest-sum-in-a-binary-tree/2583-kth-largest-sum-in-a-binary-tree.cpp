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
    long long kthLargestLevelSum(TreeNode* root, int k) {
        vector<long>ans;
        dfs(root,0,ans);
        if(ans.size()<k) return -1;
        sort(ans.begin(),ans.end(),greater<long>());
        return ans[k-1];
    }
    void dfs(TreeNode *root,int a,vector<long>&ans){
        if(root==nullptr) return;
        if(ans.size()==a) ans.push_back(0);
        ans[a]+=root->val;
        dfs(root->left,a+1,ans);
        dfs(root->right,a+1,ans);
    }
};