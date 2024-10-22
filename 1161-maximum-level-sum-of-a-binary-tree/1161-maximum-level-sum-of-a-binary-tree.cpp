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
    int maxLevelSum(TreeNode* root) {
        vector<long>ans;
        dfs(root,0,ans);
        int level=1,max=ans[0];
        for(int i=0;i<ans.size();i++){
            if(ans[i]>max){
                max=ans[i];
                level=i+1;
            }
        }
        return level;
    }
    void dfs(TreeNode *root,int a,vector<long>&ans){
        if(root==nullptr) return;
        if(ans.size()==a) ans.push_back(0);
        ans[a]+=root->val;
        dfs(root->left,a+1,ans);
        dfs(root->right,a+1,ans);
    }
    
};