/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> postorder(Node* root) {
        if(root==nullptr) return {};
        vector<int>ans;
        stack<Node*>cp{{root}};
        while(!cp.empty()){
            root=cp.top();
            cp.pop();
            ans.push_back(root->val);
            for(Node* a:root->children) cp.push(a);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};