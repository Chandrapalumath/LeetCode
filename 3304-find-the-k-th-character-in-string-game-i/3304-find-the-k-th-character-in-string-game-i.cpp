class Solution {
public:
    char kthCharacter(int k) {
        string s="a";
        while(s.length()<k){
            string ans="";
            for(char c : s){
                if(c=='z') ans+='a';
                else ans+=(c+1);
            }
            s+=ans;
        }
        return s[k-1];
    }
};