class Solution {
public:
    string reverseVowels(string s) {
        string ans;
        string p="aeiouAEIOU";
        for(int i=s.length()-1;i>=0;i--) if(p.find(s[i])<=12) ans+=s[i];
        cout<<ans;
        int j=0;
        for(int i=0;i<s.length();i++) if(p.find(s[i])<=12) {s[i]=ans[j];  j++;}
        return s;
    }
};