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
    vector<int>ans;
    void order(Node* root){
        if(root==nullptr) return ;
        ans.push_back(root->val);
        for(Node* a:root->children) order(a);
    }
    vector<int> preorder(Node* root) {
        if(root==nullptr) return {};
        order(root);
        return ans;
    }
};