class Solution {
public:
    string decodeString(string s) {
        if(s.length()==1) return s;
        int n=0;
        string ans="";
        stack<int>npush;
        stack<string>anspush;
        int i=0;
        while(i<s.length()){
            if(isdigit(s[i])) n=n*10+(s[i]-48);
            else if(isalpha(s[i])) ans+=s[i];
            else if(s[i]=='['){
                anspush.push(ans);
                npush.push(n);
                n=0;
                ans="";
            }else{
                int a=npush.top();
                string p=anspush.top();
                for(int i=0;i<a;i++){
                    p+=ans;
                }
                ans=p;
                npush.pop();
                anspush.pop();
            }
            i++;
        }
        return ans;
    }
};