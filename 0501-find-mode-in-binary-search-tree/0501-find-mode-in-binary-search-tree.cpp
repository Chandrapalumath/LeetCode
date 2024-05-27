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
#include <bits/stdc++.h>
class Solution {
public:
    vector<int>s;
    vector<int>n;
    void inorder(TreeNode* root){
        if(root==nullptr){
            return;
        }
        inorder(root->left);
        s.push_back(root->val);
        inorder(root->right);  
    }
    vector<int> findMode(TreeNode* root) {
        if(root->left==nullptr && root->right==nullptr){
            n.push_back(root->val);
            return n;
        }
        inorder(root);
        int r=s.size();
        int maxi=-1;
        unordered_map<int, int> mp;
        for(int i=0;i<r;i++){
            mp[s[i]]++;
            maxi = max(mp[s[i]], maxi);
        }
        for(auto it : mp) {
            if(it.second == maxi)
                n.push_back(it.first);
        }
        return n;
    }
};



    // vector<int>s;
    // void inorder(TreeNode* root){
    //     if(root==nullptr){
    //         return;
    //     }
    //     inorder(root->left);
    //     s.push_back(root->val);
    //     inorder(root->right);  
    // }
    // bool isValidBST(TreeNode* root) {
    //     inorder(root);
    //     int n=s.size();
    //     for(int i=0;i<n-1;i++){
    //         if(s[i]>=s[i+1]){
    //             return false;
    //         }
    //     }
    //     return true;
    // }