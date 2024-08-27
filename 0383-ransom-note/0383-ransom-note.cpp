class Solution {
public:
    bool canConstruct(string s, string t) {
        int i=0,j=0;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        while(i<s.length() && j<t.length()){
            if(s[i]==t[j]){i++;j++;}
            else j++;
        }
        if(i<s.length()) return false;
        return true;
    }
};