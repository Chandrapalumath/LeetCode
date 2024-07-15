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
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
        unordered_map<int,TreeNode *>m;
        unordered_set<int>s;
        for(int i=0;i<descriptions.size();i++){
            int child=descriptions[i][1],parent=descriptions[i][0],isleft=descriptions[i][2];
            if(!m.count(child)) m[child]=new TreeNode(child);
            if(!m.count(parent)) m[parent]=new TreeNode(parent);
            isleft ? m[parent]->left=m[child] : m[parent]->right=m[child];
            s.insert(child);
        }
        for(int i=0;i<descriptions.size();i++) if(!s.count(descriptions[i][0])) return m[descriptions[i][0]];
        return nullptr;
    }
};