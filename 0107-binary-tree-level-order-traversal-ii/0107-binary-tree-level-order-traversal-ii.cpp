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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        if(root==nullptr) return {};
        queue<TreeNode *>q{{root}};
        vector<vector<int>>ans; 
        int j=0;
        while(!q.empty()){
            int s=q.size();
            vector<int>a;
            for(int i=0;i<s;i++){
                TreeNode* root=q.front();
                q.pop();
                a.push_back(root->val);
                if(root->left) q.push(root->left); 
                if(root->right) q.push(root->right);
            }
            ans.push_back(a);
            j++;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};