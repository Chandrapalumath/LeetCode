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
    int count=0;
    void inorder(TreeNode* p, TreeNode* q){
        if(p==nullptr || q==nullptr){
            if(p!=q){count=1;}
            return ;
        }
        inorder(p->left,q->left);
        if(p->val!=q->val){ count=1;return ;}
        inorder(p->right,q->right);
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        inorder(p,q);
        if(count==0) return true;
        return false;
      
    }
};