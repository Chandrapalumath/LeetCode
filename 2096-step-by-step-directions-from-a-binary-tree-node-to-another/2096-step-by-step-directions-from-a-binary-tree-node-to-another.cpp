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
    string start,end;
    bool lca(TreeNode* root, int Value,bool isStart){
        if(root==nullptr) return false;
        if(root->val==Value) return true;
        bool l=lca(root->left,Value,isStart);
        if(l){ isStart ? start+="L" : end+="L"; return true;}
        bool r=lca(root->right,Value,isStart);
        if(r) {isStart ? start+="R" : end+="R"; return true;}
        return false;
        
    }
    string getDirections(TreeNode* root, int startValue, int destValue) {
        lca(root,startValue,true);
        lca(root,destValue,false);
        cout<<start<<" "<<end;
        string ans="";
        
        int i=start.length()-1,j=end.length()-1;
        while(i>=0 && j>=0 && start[i]==end[j]){
            start.pop_back();
            end.pop_back();
            i--;j--;
        }
        reverse(start.begin(),start.end());
        reverse(end.begin(),end.end());
        cout<<end;
        for(int i=0;i<start.length();i++) ans+="U";
        return ans+=end;
    }
};