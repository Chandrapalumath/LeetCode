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
    bool inorder(TreeNode* cp1,TreeNode* cp2){
        if(cp1==nullptr || cp2==nullptr) return  cp1==cp2;
        if(cp1->val==cp2->val){
            bool ans1=inorder(cp1->left,cp2->right);
            bool ans2=inorder(cp1->right,cp2->left);
            return ans1 && ans2;
        }else{
            return false;
        }
    }
    bool isSymmetric(TreeNode* root) {
        if(root==nullptr) return true;
        return inorder(root->left,root->right);
    }
};