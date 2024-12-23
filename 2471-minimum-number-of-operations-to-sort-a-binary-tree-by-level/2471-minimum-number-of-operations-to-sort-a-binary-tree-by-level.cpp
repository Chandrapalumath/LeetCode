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
  int minimumOperations(TreeNode* root) {
    int ans=0;
    queue<TreeNode*> q{{root}};
    while (!q.empty()) {
      vector<int> vals;
      vector<int> ids(q.size());
      for (int sz = q.size(); sz > 0; --sz) {
        TreeNode* node = q.front();
        q.pop();
        vals.push_back(node->val);
        if (node->left != nullptr)
          q.push(node->left);
        if (node->right != nullptr)
          q.push(node->right);
      }
      iota(ids.begin(), ids.end(), 0);
      ranges::sort(ids, [&vals](int i, int j) { return vals[i] < vals[j]; });
      for (int i = 0; i < ids.size(); ++i)
        for (; ids[i] != i; ++ans)
          swap(ids[i], ids[ids[i]]);
    }

    return ans;
  }
};