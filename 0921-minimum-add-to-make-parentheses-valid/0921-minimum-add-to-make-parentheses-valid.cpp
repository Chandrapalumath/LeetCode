class Solution {
public:
    stack<char>a;
    int minAddToMakeValid(string s) {
        int n =s.length();
        int ans=0;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                a.push('(');
            }else{
                if(!a.empty()){
                    a.pop();
                }else{
                    ans++;
                }
            }
        }
        while(!a.empty()){
            ans++;
            a.pop();
        }
        return ans;
    }
};