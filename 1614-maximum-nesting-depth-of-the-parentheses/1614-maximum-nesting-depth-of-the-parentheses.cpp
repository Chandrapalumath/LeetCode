class Solution {
public:
    int maxDepth(string s) {
        int max=0;
        int ans=0;
        for(char c : s){
            if(c=='(') max++;
            else if(c==')') max--;
            if(max>ans) ans=max;
        }
        return ans;
    }
};