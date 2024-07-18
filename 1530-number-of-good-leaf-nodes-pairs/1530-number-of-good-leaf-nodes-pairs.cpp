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
    void postorder(TreeNode* root,vector<int>&arr, int d){
        if(!root|| d >= arr.size()) return;
        if(!root->left && !root->right){
            ++arr[d]; 
            return ;}
        postorder(root->left,arr,d+1);
        postorder(root->right,arr,d+1);
        
    }
    int countPairs(TreeNode* root, int distance) {
        if(!root) return 0;
        int ans=countPairs(root->left,distance)+countPairs(root->right,distance);
        vector<int>arr1(distance);
        vector<int>arr2(distance);
        postorder(root->left,arr1,1);
        postorder(root->right,arr2,1);
        for(int i=0;i<distance;i++)
            for(int j=0;j<distance;j++)
                if(i+j<=distance) ans+=  arr1[i]*arr2[j];
        return ans;
    }
};