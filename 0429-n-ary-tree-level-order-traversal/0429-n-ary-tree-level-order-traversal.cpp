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
    int p=0;
    void order1(Node* root,int i){
        if(root==nullptr) return;;
        for(Node* a:root->children) order1(a,i+1);
        p=max(p,i);
    }
    void order(Node* root,int i,vector<vector<int>>&ans){
        if(root==nullptr) return;
        ans[i].push_back(root->val);
        for(Node* a:root->children) order(a,i+1,ans);
    }
    vector<vector<int>> levelOrder(Node* root) {
        if(root==nullptr) return {};
        order1(root,0);
        vector<vector<int>>ans(p+1);
        order(root,0,ans);
        return ans;
    }
};