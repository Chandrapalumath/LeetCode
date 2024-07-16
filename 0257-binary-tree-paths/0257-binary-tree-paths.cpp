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
    vector<string>ans;
    string str="";
    void inorder(TreeNode* root,string str){
        if(root==nullptr) return;
        str+=to_string(root->val)+"->";
        if(root->left == nullptr && root->right == nullptr){
            str.erase(str.length()-2,2);
            ans.push_back(str);
        }
        inorder(root->left,str);
        inorder(root->right,str);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        inorder(root,str);
        return ans;
    }
};