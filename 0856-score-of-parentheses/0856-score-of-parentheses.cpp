class Solution {
public:
    int scoreOfParentheses(string s) {
        int a=0,l=0;
        for(int i=0;i<s.length()-1;i++){
            if(s[i]=='(' && s[i+1]==')') a+=1<<l;
            l+=  s[i]=='('? 1:-1;
        }
        return a;
    }
};