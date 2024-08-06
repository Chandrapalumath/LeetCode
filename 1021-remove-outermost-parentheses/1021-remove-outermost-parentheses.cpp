class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans;
        int a=0;
        for(char c:s){
            if(c=='('){
                a++;
                if(a>1) ans+=c;
            }else if(--a>0) ans+=c;
        }
        return ans;
    }  
};