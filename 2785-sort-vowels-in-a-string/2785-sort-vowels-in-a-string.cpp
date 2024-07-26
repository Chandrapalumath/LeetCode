class Solution {
public:
    string sortVowels(string s) {
        vector<char>ans;
        string p="aeiouAEIOU";
        for(int i=s.length()-1;i>=0;i--) if(p.find(s[i])<=12) ans.push_back(s[i]);
        if(ans.size()<=1) return s;
        sort(ans.begin(),ans.end(),greater<int>());
        int j=0;
        for(int i=s.length()-1;i>=0;i--) if(p.find(s[i])<=12) {s[i]=ans[j]; j++;}
        return s;
    }
};