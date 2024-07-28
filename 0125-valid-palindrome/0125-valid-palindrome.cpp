class Solution {
public:
    bool isPalindrome(string s) {
        string ans;
        for(auto c:s){
            if(isalpha(c) || isdigit(c)){
                if(c-65>=0 && c-65<=25) ans+=tolower(c);
                else ans+=c;
            }
        }
        cout<<ans;
        for(int i=0;i<ans.length()/2;i++){
            if(ans[i]!=ans[ans.length()-i-1]) return false;
        }
        return true;
    }
};