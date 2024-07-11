class Solution {
public:
    string reverseParentheses(string s) {
        stack<string>sk;
        string ans="";
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                sk.push(ans);
                ans="";
            }else if(s[i]==')'){
                reverse(ans.begin(),ans.end());
                if(!sk.empty()){ans=sk.top()+ans;sk.pop();}
            }else ans+=s[i];
        }
        return ans;
    }
};